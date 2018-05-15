#!/usr/bin/env perl
# localhost:4646
use CGI qw{param};
print "Content-type: text/html\n\n";

sub t {
  $nn = $_[1]; # second paramètre adr
  $xx = $_[0]; # premier paramètre adr
  $xx =~ tr/a-z/A-Z/; # dans le premier paramètre on met tout en majuscules
  $xx =~ s/\s.*//; # puis on enlève tout ce qui est après le 1er espace
  @output = `egrep "^$xx" /tmp/xd 2>&1`; # là on voit que la commande est run avec les backquotes. donc c'est là qu'on va tout exploit, faut juste que la commande arrive là et la suite on s'en fout
  foreach $line (@output) {
      ($f, $s) = split(/:/, $line);
      if($s =~ $nn) {
          return 1;
      }
  }
  return 0;
}

sub n {
  if($_[0] == 1) {
      print("..");
  } else {
      print(".");
  }
}

n(t(param("x"), param("y")));
