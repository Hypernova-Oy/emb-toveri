#!/usr/bin/perl

use 5.20.2;

=head2 IN THIS FILE

Same test as

    1-gpio-test.sh

but implemented using the HiPi-library
to see if HiPi is performing correctly.

=cut

use HiPi qw(:rpi);
use HiPi::Device::GPIO; #Uses the BCM-pin number mappings internally,
                        #but exported constants map to physical pin locations

use File::Slurp;
use Time::HiRes;

use Log::Log4perl qw(:easy);
Log::Log4perl::easy_init($TRACE);
my $l = Log::Log4perl->get_logger();


my $pinsToTestConfigFile = "0-pins-to-test.cfg";

my @pins = File::Slurp::read_file($pinsToTestConfigFile => { binmode => ':raw' });
s{^\s+|\s+$}{}g foreach @pins; #Remove trailing/leading whitespace
@pins = grep { $_ !~ /^[# ]+/ && length($_) > 0 } @pins; #Drop comments and blanks

if ($l->is_info()) {
  $l->debug("Using configured pins '@pins' from '$pinsToTestConfigFile'");
}


my $gpio = HiPi::Device::GPIO->new();

=head2 resetPins

Set all configured pins to output mode and value is 0

=cut

sub resetPins {
  my ($pins) = @_;

  $l->info("Reseting pins");

  foreach my $pinNo (@$pins) {

    $l->debug("Reseting physical pin '$pinNo'") if $l->is_debug();
    my $pin = $gpio->get_pin(_getPinNumberConstant($pinNo));
    $pin->mode(RPI_OUTPUT);
    $pin->value(0);
    Time::HiRes::nanosleep(0.01*1000000000); #sleep a bit
    my $value = $pin->value();
    $l->error("Physical pin '$pinNo' was not turned on?") if ($value != 0 && $l->is_error());
  }
}

=head2 runTests

Tests all configured pins

=cut

sub runTests {
  my ($pins) = @_;

  $l->info("Testing pins");

  foreach my $pinNo (@$pins) {

    $l->info("Testing physical pin '$pinNo'") if $l->is_debug();
    my $pin = $gpio->get_pin(_getPinNumberConstant($pinNo));
    $pin->value(1);
    Time::HiRes::nanosleep(0.5*1000000000); #sleep half a second
    my $value = $pin->value();
    $l->error("Physical pin '$pinNo' was not turned on?") if ($value != 1 && $l->is_error());
    $pin->value(0);
  }
}

=head3 _getPinNumberConstant

Turn a dynamic pin number into the matching static :rpi constant

=cut

sub _getPinNumberConstant {
  my ($pinNo) = @_;

  my $bcmNo = eval "RPI_PIN_$pinNo";
  $l->trace("Physical pin no '$pinNo' converted to BCM pin no '$bcmNo'") if $l->is_trace();
  return $bcmNo;
}

=head3 test__getPinNumberConstant

Test if we get the expected BCM pin numbers from the raspberry physical pins.
If not, this is a strong indication that the underlying pin configurations have changed.
This is most certiainly due to using a Raspberry Pi with a different pin layout than
the Raspberry Pi 3+

=cut

sub test_getPinNumberConstant {
  require Test::More;
  Test::More::is(_getPinNumberConstant(3),  2);
  Test::More::is(_getPinNumberConstant(10), 15);
  Test::More::is(_getPinNumberConstant(15), 22);
  Test::More::is(_getPinNumberConstant(26), 7);
  Test::More::is(_getPinNumberConstant(40), 21);
  Test::More::done_testing();
}



test_getPinNumberConstant();
resetPins(\@pins);
runTests(\@pins);
