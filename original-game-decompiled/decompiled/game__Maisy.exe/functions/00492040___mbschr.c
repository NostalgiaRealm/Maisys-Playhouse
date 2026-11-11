
/* ==== __mbschr @ 00492040 ==== 
 * signature: uchar * __cdecl __mbschr(uchar * _Str, uint _Ch)
 * body: 00492040-004920f4
 * note: Library Function - Single Match  __mbschr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  uchar *puVar2;
  
  if (DAT_004de2f4 == 0) {
    puVar2 = (uchar *)_strchr((char *)_Str,_Ch);
    return puVar2;
  }
  __lock(0x19);
  bVar1 = *_Str;
  while (bVar1 != 0) {
    if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) == 0) {
      puVar2 = _Str;
      if ((ushort)bVar1 == _Ch) break;
    }
    else {
      if (_Str[1] == '\0') {
        FUN_00493e20(0x19);
        return (uchar *)0x0;
      }
      puVar2 = _Str + 1;
      if (CONCAT11(bVar1,_Str[1]) == _Ch) {
        FUN_00493e20(0x19);
        return _Str;
      }
    }
    _Str = puVar2 + 1;
    bVar1 = puVar2[1];
  }
  FUN_00493e20(0x19);
  return (uchar *)(-(uint)((ushort)bVar1 == _Ch) & (uint)_Str);
}


