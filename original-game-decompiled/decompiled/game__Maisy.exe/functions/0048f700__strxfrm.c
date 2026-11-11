
/* ==== _strxfrm @ 0048f700 ==== 
 * signature: size_t __cdecl _strxfrm(char * _Dst, char * _Src, size_t _MaxCount)
 * body: 0048f700-0048f867
 * note: Library Function - Single Match  _strxfrm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strxfrm
   
   Library: Visual Studio 1998 Release */

size_t __cdecl _strxfrm(char *_Dst,char *_Src,size_t _MaxCount)

{
  char cVar1;
  int iVar2;
  UINT UVar3;
  size_t sVar4;
  uint uVar5;
  size_t sVar6;
  bool bVar7;
  WCHAR local_c [6];
  
  if ((DAT_004de69c != 0) || (DAT_004de6b0 != 0)) {
    bVar7 = DAT_004e6794 == 0;
    if (bVar7) {
      DAT_004e6798 = DAT_004e6798 + 1;
    }
    else {
      __lock(0x13);
    }
    if ((DAT_004de69c != 0) || (DAT_004de6b0 != 0)) {
      iVar2 = ___crtGetLocaleInfoW(DAT_004de69c,0xb,local_c,5,0);
      sVar6 = 0x7fffffff;
      if (iVar2 != 0) {
        UVar3 = _wcstol(local_c,(wchar_t **)0x0,10);
        sVar4 = FUN_004953b0(DAT_004de69c,0x400,_Src,-1,(LPWSTR)0x0,0,UVar3);
        if ((sVar4 != 0) && (sVar6 = sVar4, (int)sVar4 <= (int)_MaxCount)) {
          FUN_004953b0(DAT_004de69c,0x400,_Src,-1,(LPWSTR)_Dst,_MaxCount,UVar3);
        }
      }
      if (!bVar7) {
        FUN_00493e20(0x13);
        return sVar6;
      }
      DAT_004e6798 = DAT_004e6798 + -1;
      return sVar6;
    }
    if (bVar7) {
      DAT_004e6798 = DAT_004e6798 + -1;
    }
    else {
      FUN_00493e20(0x13);
    }
    _strncpy(_Dst,_Src,_MaxCount);
    uVar5 = 0xffffffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *_Src;
      _Src = _Src + 1;
    } while (cVar1 != '\0');
    return ~uVar5 - 1;
  }
  _strncpy(_Dst,_Src,_MaxCount);
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *_Src;
    _Src = _Src + 1;
  } while (cVar1 != '\0');
  return ~uVar5 - 1;
}


