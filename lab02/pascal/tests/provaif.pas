program provaif;
var
  x, y: integer;
begin
  x := 0;
  y := 1;
  readln (y);
  if ((x + y) * 2) = 8 then
    begin
       y := y - x;
       y := y + x;
       writeln(y);
     end
   else if (y < x) then
     begin
        x := x;
        x := x + y;
        writeln(y);
     end;
end.