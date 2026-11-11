
/* ==== __mbscmp @ 00491ac0 ==== 
 * signature: int __cdecl __mbscmp(uchar * _Str1, uchar * _Str2)
 * body: 00491ac0-00491bba
 * note: Library Function - Single Match  __mbscmp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbscmp
   
   Library: Visual Studio 1998 Release */

int __cdecl __mbscmp(uchar *_Str1,uchar *_Str2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ushort uVar4;
  byte *pbVar5;
  bool bVar6;
  ushort local_2;
  
  if (DAT_004de2f4 != 0) {
    __lock(0x19);
    while( true ) {
      bVar1 = *_Str1;
      local_2 = (ushort)bVar1;
      pbVar3 = _Str1 + 1;
      if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) != 0) {
        bVar2 = *pbVar3;
        if (bVar2 == 0) {
          local_2 = 0;
        }
        else {
          pbVar3 = _Str1 + 2;
          local_2 = CONCAT11(bVar1,bVar2);
        }
      }
      pbVar5 = _Str2 + 1;
      bVar1 = *_Str2;
      uVar4 = (ushort)bVar1;
      if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) != 0) {
        bVar2 = *pbVar5;
        if (bVar2 == 0) {
          uVar4 = 0;
        }
        else {
          pbVar5 = _Str2 + 2;
          uVar4 = CONCAT11(bVar1,bVar2);
        }
      }
      if (uVar4 != local_2) break;
      _Str1 = pbVar3;
      _Str2 = pbVar5;
      if (local_2 == 0) {
        FUN_00493e20(0x19);
        return 0;
      }
    }
    FUN_00493e20(0x19);
    return (-(uint)(uVar4 < local_2) & 2) - 1;
  }
  while( true ) {
    bVar1 = *_Str1;
    bVar6 = bVar1 < *_Str2;
    if (bVar1 != *_Str2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = _Str1[1];
    bVar6 = bVar1 < _Str2[1];
    if (bVar1 != _Str2[1]) break;
    _Str1 = _Str1 + 2;
    _Str2 = _Str2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar6) - (uint)(bVar6 != 0);
}


