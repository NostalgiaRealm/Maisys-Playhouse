
/* ==== __mbsrev @ 004921c0 ==== 
 * signature: uchar * __cdecl __mbsrev(uchar * _Str)
 * body: 004921c0-0049223a
 * note: Library Function - Single Match  __mbsrev  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsrev
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbsrev(uchar *_Str)

{
  byte bVar1;
  uchar *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_004de2f4 == 0) {
    puVar2 = (uchar *)__strrev((char *)_Str);
    return puVar2;
  }
  __lock(0x19);
  bVar1 = *_Str;
  pbVar4 = _Str;
  while (pbVar3 = pbVar4, bVar1 != 0) {
    pbVar3 = pbVar4 + 1;
    if ((*(byte *)((int)&DAT_004de1f0 + *pbVar4 + 1) & 4) != 0) {
      bVar1 = *pbVar3;
      if (bVar1 == 0) break;
      *pbVar3 = *pbVar4;
      *pbVar4 = bVar1;
      pbVar3 = pbVar4 + 2;
    }
    pbVar4 = pbVar3;
    bVar1 = *pbVar3;
  }
  pbVar3 = pbVar3 + -1;
  pbVar4 = _Str;
  if (_Str < pbVar3) {
    do {
      bVar1 = *pbVar4;
      *pbVar4 = *pbVar3;
      pbVar4 = pbVar4 + 1;
      *pbVar3 = bVar1;
      pbVar3 = pbVar3 + -1;
    } while (pbVar4 < pbVar3);
  }
  FUN_00493e20(0x19);
  return _Str;
}


