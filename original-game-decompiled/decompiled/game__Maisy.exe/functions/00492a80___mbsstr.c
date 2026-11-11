
/* ==== __mbsstr @ 00492a80 ==== 
 * signature: uchar * __cdecl __mbsstr(uchar * _Str, uchar * _Substr)
 * body: 00492a80-00492b10
 * note: Library Function - Single Match  __mbsstr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsstr
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbsstr(uchar *_Str,uchar *_Substr)

{
  uchar uVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  if (DAT_004de2f4 == 0) {
    puVar2 = (uchar *)_strstr((char *)_Str,(char *)_Substr);
    return puVar2;
  }
  uVar3 = 0xffffffff;
  puVar2 = _Str;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (uVar1 != '\0');
  uVar4 = 0xffffffff;
  puVar2 = _Substr;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (uVar1 != '\0');
  uVar1 = *_Str;
  puVar2 = _Str + ((~uVar3 - 1) - (~uVar4 - 1));
  while( true ) {
    if ((uVar1 == '\0') || (puVar2 < _Str)) {
      return (uchar *)0x0;
    }
    uVar1 = *_Str;
    puVar5 = _Str;
    for (puVar6 = _Substr; ((uVar1 != '\0' && (*puVar6 != '\0')) && (*puVar5 == *puVar6));
        puVar6 = puVar6 + 1) {
      puVar5 = puVar5 + 1;
      uVar1 = *puVar5;
    }
    if (*puVar6 == '\0') break;
    _Str = __mbsinc(_Str);
    uVar1 = *_Str;
  }
  return _Str;
}


