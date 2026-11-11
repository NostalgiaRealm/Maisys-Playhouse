
/* ==== __mbscspn @ 004929d0 ==== 
 * signature: size_t __cdecl __mbscspn(uchar * _Str, uchar * _Control)
 * body: 004929d0-00492a7c
 * note: Library Function - Single Match  __mbscspn  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbscspn
   
   Library: Visual Studio 1998 Release */

size_t __cdecl __mbscspn(uchar *_Str,uchar *_Control)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (DAT_004de2f4 == 0) {
    sVar3 = _strcspn((char *)_Str,(char *)_Control);
    return sVar3;
  }
  __lock(0x19);
  pbVar4 = _Str;
  if (*_Str == '\0') {
LAB_00492a68:
    FUN_00493e20(0x19);
    return (int)pbVar4 - (int)_Str;
  }
  pbVar2 = _Control;
  bVar1 = *_Control;
joined_r0x00492a19:
  do {
    if (bVar1 != 0) {
      bVar1 = *pbVar2;
      if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) == 0) {
        pbVar5 = pbVar2;
        if (*pbVar4 != bVar1) goto LAB_00492a45;
      }
      else if (((*pbVar4 != bVar1) || (pbVar4[1] != pbVar2[1])) &&
              (pbVar5 = pbVar2 + 1, *pbVar5 != 0)) {
LAB_00492a45:
        pbVar2 = pbVar5 + 1;
        bVar1 = pbVar5[1];
        goto joined_r0x00492a19;
      }
    }
    if (((*pbVar2 != 0) ||
        (((*(byte *)((int)&DAT_004de1f0 + *pbVar4 + 1) & 4) != 0 &&
         (pbVar4 = pbVar4 + 1, *pbVar4 == 0)))) ||
       (pbVar4 = pbVar4 + 1, pbVar2 = _Control, bVar1 = *_Control, *pbVar4 == 0)) goto LAB_00492a68;
  } while( true );
}


