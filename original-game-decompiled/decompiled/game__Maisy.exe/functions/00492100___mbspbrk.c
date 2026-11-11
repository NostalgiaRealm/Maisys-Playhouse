
/* ==== __mbspbrk @ 00492100 ==== 
 * signature: uchar * __cdecl __mbspbrk(uchar * _Str, uchar * _Control)
 * body: 00492100-004921b1
 * note: Library Function - Single Match  __mbspbrk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbspbrk
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbspbrk(uchar *_Str,uchar *_Control)

{
  byte bVar1;
  byte *pbVar2;
  uchar *puVar3;
  byte *pbVar4;
  
  if (DAT_004de2f4 == 0) {
    puVar3 = (uchar *)_strpbrk((char *)_Str,(char *)_Control);
    return puVar3;
  }
  __lock(0x19);
  if (*_Str == '\0') {
LAB_00492196:
    FUN_00493e20(0x19);
    return (uchar *)((*_Str == 0) - 1 & (uint)_Str);
  }
  pbVar2 = _Control;
  bVar1 = *_Control;
joined_r0x00492147:
  do {
    if (bVar1 != 0) {
      bVar1 = *pbVar2;
      if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) == 0) {
        pbVar4 = pbVar2;
        if (*_Str != bVar1) goto LAB_00492173;
      }
      else if (((*_Str != bVar1) || (_Str[1] != pbVar2[1])) && (pbVar4 = pbVar2 + 1, *pbVar4 != 0))
      {
LAB_00492173:
        pbVar2 = pbVar4 + 1;
        bVar1 = pbVar4[1];
        goto joined_r0x00492147;
      }
    }
    if (((*pbVar2 != 0) ||
        (((*(byte *)((int)&DAT_004de1f0 + *_Str + 1) & 4) != 0 && (_Str = _Str + 1, *_Str == 0))))
       || (_Str = _Str + 1, pbVar2 = _Control, bVar1 = *_Control, *_Str == 0)) goto LAB_00492196;
  } while( true );
}


