program
  exe;

var
  p: Pointer;
  f: file;
begin
  GetMem(p, $50);
  Assign(f, 'ati.dll');
  ReSet(f, 1);
  Seek(f, $40);
  BlockRead(f, p^, $50);
  Close(f);
  WriteLn('Calling code of DOS Stub...');
  asm
    call dword ptr p
  end;
  WriteLn('Done.');

  ReadLn;
end.
