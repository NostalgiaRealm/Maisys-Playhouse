
/* ==== __mbsspn @ 00492920 ==== 
 * signature: size_t __cdecl __mbsspn(uchar * _Str, uchar * _Control)
 * body: 00492920-004929cc
 * note: Library Function - Single Match  __mbsspn  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsspn
   
   Library: Visual Studio 1998 Release */

size_t __cdecl __mbsspn(uchar *_Str,uchar *_Control)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (DAT_004de2f4 == 0) {
    sVar3 = _strspn((char *)_Str,(char *)_Control);
    return sVar3;
  }
  __lock(0x19);
  pbVar4 = _Str;
  if (*_Str == '\0') {
LAB_004929b8:
    FUN_00493e20(0x19);
    return (int)pbVar4 - (int)_Str;
  }
  pbVar2 = _Control;
  bVar1 = *_Control;
joined_r0x00492969:
  do {
    if (bVar1 != 0) {
      bVar1 = *pbVar2;
      if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) == 0) {
        pbVar5 = pbVar2;
        if (*pbVar4 != bVar1) goto LAB_00492995;
      }
      else if (((*pbVar4 != bVar1) || (pbVar4[1] != pbVar2[1])) &&
              (pbVar5 = pbVar2 + 1, *pbVar5 != 0)) {
LAB_00492995:
        pbVar2 = pbVar5 + 1;
        bVar1 = pbVar5[1];
        goto joined_r0x00492969;
      }
    }
    if (((*pbVar2 == 0) ||
        (((*(byte *)((int)&DAT_004de1f0 + *pbVar4 + 1) & 4) != 0 &&
         (pbVar4 = pbVar4 + 1, *pbVar4 == 0)))) ||
       (pbVar4 = pbVar4 + 1, pbVar2 = _Control, bVar1 = *_Control, *pbVar4 == 0)) goto LAB_004929b8;
  } while( true );
}


