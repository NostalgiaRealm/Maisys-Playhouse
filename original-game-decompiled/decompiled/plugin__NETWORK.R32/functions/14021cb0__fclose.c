
/* ==== _fclose @ 14021cb0 ==== 
 * signature: int __cdecl _fclose(FILE * _File)
 * body: 14021cb0-14021cee
 * note: Library Function - Single Match  _fclose  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 1998 Release */

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  
  if ((_File->_flag & 0x40) != 0) {
    _File->_flag = 0;
    return -1;
  }
  FID_conflict___lock_file(_File);
  iVar1 = __fclose_lk(_File);
  FID_conflict___lock_file(_File);
  return iVar1;
}


