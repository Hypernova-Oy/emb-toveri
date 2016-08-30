#!/usr/bin/perl
#
# Copyright (C) 2016 Koha-Suomi
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with This program.  If not, see <http://www.gnu.org/licenses/>.

use Modern::Perl;

use GPIO;
use Buzzer;
use Relay::DoubleLatch;
use Time::HiRes;
use HiPi::Interface::DS18X20

# GPIO ports taken from KiCad project file 'authenticator.sch'
use constant {
    WARMER => 16,
    GREEN => 22,
    BLUE => 27,
    RED => 17,
    DOOR => 25,
    BUZZER => 18,
    SWITCH_WARMER_ON_GPIO => 23,
    SWITCH_WARMER_OFF_GPIO => 24,
};


sub buzz {
    my ($frequency, $seconds) = @_;
    my $buzzer = Buzzer->new(BUZZER);
    $buzzer->buzz($frequency, $seconds);
}

sub warm {
    my ($seconds) = @_;

    my $warmerRelay = Relay::DoubleLatch->new(SWITCH_WARMER_ON_GPIO,
					      SWITCH_WARMER_OFF_GPIO);

    $warmerRelay->switchOn();
    say "Warming pad should now be on – sleeping for few seconds";
    $warmerRelay->switchOff();
}

sub getTemperature {
    my $tempSensor = HiPi::Interface::DS18X20->new(
	id         => getTemperatureSensorID(),
	correction => -4000,
	divider    => 1000,
	);
    return $tempSensor->temperature();
}

sub getTemperatureSensorID {
    opendir(my $dirHandle, "/sys/bus/w1/devices")
	|| exitWithError("Couldn't open temperature sensor dir");
    my @files = readdir($dirHandle);
    my @tempSensors = grep (/^28.*/, @files);

    if (! scalar @tempSensors) {
	exitWithError("Couldn't connect to a temperature sensor");
    }

    return $tempSensors[0];
}

sub turnGPIOOn {
    my ($GPIO_PORT, $seconds) = @_;
    my $gpio = new GPIO->new($GPIO_PORT);
    $gpio->turnOn();
    sleep $seconds;
    $gpio->turnOff();
}

sub main {
    say "Buzzing beeper at 3100Hz for ~1 second";
    buzz(3100, 1);

    say "Warming warming pad for 4 seconds";
    warm(4);

    say "Temperature sensor: ", getTemperature, "°C";

    say "Turning blue led on for 1 second";
    turnGPIOOn(BLUE, 1);

    say "Turning red led on for 1 second";
    turnGPIOOn(RED, 1);

    say "Turning green led on for 1 second";
    turnGPIOOn(GREEN, 1);

    say "Turning door relay on for 1 second";
    turnGPIOOn(DOOR, 1);
}

main();

1;
