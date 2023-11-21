#!/usr/bin/perl
#
# Copyright Brian Ponnampalam 2020
# Author is not held responsible for any damages by this script. 
# Feel free to redistribute and modify the script.
#
#
# Author: brian2004[at] hotmail[dot] com

use strict;
print "\n\nGuess a number memorize it in your head\n\n";
print "Now multiply it by 2\n\n";
print "Now add 10 to it\n\n";
print "Now divide it by 2\n\n";
print "Please enter your total?";
my $answer = <STDIN>;

my $i = 0;
if ($answer < 6) {
 print "You entered an invalid answer\n";
 exit 0;
}
if ($answer >= 6) {
 for ($i=6; $i<=$answer; $i++) {
 #  print "$i\n";
 }
 print "You thought of number: ".($i-6)."\n\n";
}
