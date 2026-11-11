
/* ==== FUN_004ad638 @ 004ad638 ==== 
 * signature: undefined __cdecl FUN_004ad638(LPCSTR param_1, int param_2, int param_3)
 * body: 004ad638-004ad73e
 */

void __cdecl FUN_004ad638(LPCSTR param_1,int param_2,int param_3)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  LPCSTR lpString2;
  uchar *_Ptr;
  int iVar4;
  
  iVar2 = lstrlenA(param_1);
  uVar3 = AfxGetFileName(param_1,(char *)0x0,0);
  iVar4 = uVar3 - 1;
  lpString2 = param_1 + (iVar2 - iVar4);
  if (param_2 < iVar2) {
    if (param_2 < iVar4) {
      if (param_3 == 0) {
        lpString2 = &DAT_004dd6e8;
      }
      lstrcpyA(param_1,lpString2);
    }
    else {
      _Ptr = (uchar *)(param_1 + 2);
      if ((*param_1 == '\\') && (param_1[1] == '\\')) {
        uVar1 = *_Ptr;
        while (uVar1 != '\\') {
          _Ptr = __mbsinc(_Ptr);
          uVar1 = *_Ptr;
        }
      }
      if (3 < iVar2 - iVar4) {
        _Ptr = __mbsinc(_Ptr);
        uVar1 = *_Ptr;
        while (uVar1 != '\\') {
          _Ptr = __mbsinc(_Ptr);
          uVar1 = *_Ptr;
        }
      }
      iVar2 = (int)_Ptr - (int)param_1;
      if (param_2 < iVar4 + iVar2 + 5) {
        lstrcpyA(param_1,lpString2);
      }
      else {
        while (iVar4 = lstrlenA((LPCSTR)_Ptr), param_2 < iVar4 + iVar2 + 4) {
          do {
            _Ptr = __mbsinc(_Ptr);
          } while (*_Ptr != '\\');
        }
        param_1[iVar2] = '\0';
        lstrcatA(param_1,"\\...");
        lstrcatA(param_1,(LPCSTR)_Ptr);
      }
    }
  }
  return;
}


