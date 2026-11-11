
/* ==== _strcoll @ 0048f510 ==== 
 * signature: int __cdecl _strcoll(char * _Str1, char * _Str2)
 * body: 0048f510-0048f681
 * note: Library Function - Single Match  _strcoll  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strcoll
   
   Library: Visual Studio 1998 Release */

int __cdecl _strcoll(char *_Str1,char *_Str2)

{
  byte bVar1;
  int iVar2;
  UINT UVar3;
  int *piVar4;
  bool bVar5;
  WCHAR local_c [6];
  
  if (DAT_004de69c != 0) {
    bVar5 = DAT_004e6794 == 0;
    if (bVar5) {
      DAT_004e6798 = DAT_004e6798 + 1;
    }
    else {
      __lock(0x13);
    }
    if (DAT_004de69c != 0) {
      iVar2 = ___crtGetLocaleInfoW(DAT_004de69c,0xb,local_c,5,0);
      if (iVar2 == 0) {
        return 0x7fffffff;
      }
      UVar3 = _wcstol(local_c,(wchar_t **)0x0,10);
      iVar2 = FUN_00495930(DAT_004de69c,0x1000,(byte *)_Str1,-1,(byte *)_Str2,-1,UVar3);
      if (iVar2 == 0) {
        if (bVar5) {
          DAT_004e6798 = DAT_004e6798 + -1;
        }
        else {
          FUN_00493e20(0x13);
        }
        piVar4 = FUN_0048f9d0();
        *piVar4 = 0x16;
        return 0x7fffffff;
      }
      if (!bVar5) {
        FUN_00493e20(0x13);
        return iVar2 + -2;
      }
      DAT_004e6798 = DAT_004e6798 + -1;
      return iVar2 + -2;
    }
    if (bVar5) {
      DAT_004e6798 = DAT_004e6798 + -1;
    }
    else {
      FUN_00493e20(0x13);
    }
    while( true ) {
      bVar1 = *_Str1;
      bVar5 = bVar1 < (byte)*_Str2;
      if (bVar1 != *_Str2) break;
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = _Str1[1];
      bVar5 = bVar1 < (byte)_Str2[1];
      if (bVar1 != _Str2[1]) break;
      _Str1 = _Str1 + 2;
      _Str2 = _Str2 + 2;
      if (bVar1 == 0) {
        return 0;
      }
    }
    return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  while( true ) {
    bVar1 = *_Str1;
    bVar5 = bVar1 < (byte)*_Str2;
    if (bVar1 != *_Str2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = _Str1[1];
    bVar5 = bVar1 < (byte)_Str2[1];
    if (bVar1 != _Str2[1]) break;
    _Str1 = _Str1 + 2;
    _Str2 = _Str2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}


