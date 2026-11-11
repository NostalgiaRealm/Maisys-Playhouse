
/* ==== __mbsnbcpy @ 004946e0 ==== 
 * signature: uchar * __cdecl __mbsnbcpy(uchar * _Dest, uchar * _Source, size_t _Count)
 * body: 004946e0-00494782
 * note: Library Function - Single Match  __mbsnbcpy  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsnbcpy
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbsnbcpy(uchar *_Dest,uchar *_Source,size_t _Count)

{
  byte bVar1;
  uchar *puVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (DAT_004de2f4 == 0) {
    puVar2 = (uchar *)_strncpy((char *)_Dest,(char *)_Source,_Count);
    return puVar2;
  }
  __lock(0x19);
  pbVar5 = _Dest;
  do {
    while( true ) {
      pbVar4 = pbVar5;
      sVar3 = _Count;
      pbVar5 = pbVar4;
      if (_Count == 0) goto joined_r0x00494753;
      sVar3 = _Count - 1;
      bVar1 = *_Source;
      if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) == 0) break;
      *pbVar4 = bVar1;
      pbVar5 = pbVar4 + 1;
      if (sVar3 == 0) {
        *pbVar4 = 0;
        goto joined_r0x00494753;
      }
      bVar1 = _Source[1];
      sVar3 = _Count - 2;
      *pbVar5 = bVar1;
      pbVar5 = pbVar4 + 2;
      _Source = _Source + 2;
      _Count = sVar3;
      if (bVar1 == 0) {
        *pbVar4 = 0;
        goto joined_r0x00494753;
      }
    }
    *pbVar4 = bVar1;
    pbVar5 = pbVar4 + 1;
    _Source = _Source + 1;
    _Count = sVar3;
  } while (bVar1 != 0);
joined_r0x00494753:
  for (; sVar3 != 0; sVar3 = sVar3 - 1) {
    *pbVar5 = 0;
    pbVar5 = pbVar5 + 1;
  }
  FUN_00493e20(0x19);
  return _Dest;
}


