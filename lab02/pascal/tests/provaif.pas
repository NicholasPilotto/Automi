program provaif;
var
  a, b, c, d: integer;
begin
  repeat
    writeln(a);
  until a < b not b > a;
  // if x < y then
  //   y := y - x;
  // else if y < x then
  //   x := x - y;
end.