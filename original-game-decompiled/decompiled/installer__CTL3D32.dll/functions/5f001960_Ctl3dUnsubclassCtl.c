
/* ==== Ctl3dUnsubclassCtl @ 5f001960 ==== 
 * signature: undefined4 __stdcall Ctl3dUnsubclassCtl(HWND param_1)
 * body: 5f001960-5f001a66
 */

undefined4 Ctl3dUnsubclassCtl(HWND param_1)

{
  code *pcVar1;
  HANDLE pvVar2;
  HWND hWnd;
  int iVar3;
  
                    /* 0x1960  26  Ctl3dUnsubclassCtl */
  if (DAT_5f005130 != 0) {
    pcVar1 = (code *)GetWindowLongA(param_1,-4);
    iVar3 = 0;
    do {
      if ((code *)(&DAT_5f00a190)[iVar3 * 6] == pcVar1) {
        pvVar2 = FUN_5f001020(param_1,iVar3);
        RemovePropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
        SetWindowLongA(param_1,-4,(LONG)pvVar2);
        pcVar1 = (code *)0x0;
        iVar3 = 0x10;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    if (iVar3 == 6) {
      if (pcVar1 == Ctl3dDlgProc) {
        pvVar2 = FUN_5f001020(param_1,6);
        RemovePropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
        SetWindowLongA(param_1,-4,(LONG)pvVar2);
      }
      else {
        pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
        if (((pvVar2 != (HANDLE)0x0) ||
            (pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005142), pvVar2 != (HANDLE)0x0)) ||
           (pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005140), pvVar2 != (HANDLE)0x0)) {
          SetPropA(param_1,(LPCSTR)(uint)DAT_5f005144,(HANDLE)0x1);
        }
      }
    }
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      Ctl3dUnsubclassCtl(hWnd);
    }
    return 1;
  }
  return 0;
}


