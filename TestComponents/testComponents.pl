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

# GPIO ports taken from KiCad project file 'authenticator.sch'
use constant {
    WARMER => 16,
    BUZZER => 18,
};


sub buzz {
    my ($frequency, $seconds) = @_;
    my $buzzer = Buzzer->new(BUZZER);
    $buzzer->buzz($frequency, $seconds);
}

sub warm {
    my ($seconds) = @_;
    my $warmer = GPIO->new(16);
    $warmer->turnOn();
    sleep $seconds;
    $warmer->turnOff();
}


sub main {
    say "Buzzing beeper at 3100Hz for ~1 second";
    buzz(3100, 1);

    say "Warming warming pad for 10 seconds";
    warm(10);
    
}

main();

1;
