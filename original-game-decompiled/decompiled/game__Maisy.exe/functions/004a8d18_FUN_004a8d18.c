
/* ==== FUN_004a8d18 @ 004a8d18 ==== 
 * signature: undefined __stdcall FUN_004a8d18(HWND__ * param_1)
 * body: 004a8d18-004a8e1d
 */

void FUN_004a8d18(HWND__ *param_1)

{
  CWnd *this;
  _AFX_THREAD_STATE *p_Var1;
  LONG *pLVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  LONG LVar7;
  HANDLE hData;
  HANDLE pvVar8;
  code *dwNewLong;
  
  p_Var1 = AfxGetThreadState();
  this = *(CWnd **)(p_Var1 + 0x14);
  if (this == (CWnd *)0x0) {
    hData = (HANDLE)GetWindowLongA(param_1,-4);
    if (hData != (HANDLE)0x0) {
      SetPropA(param_1,"AfxOldWndProc",hData);
      pvVar8 = GetPropA(param_1,"AfxOldWndProc");
      if (pvVar8 == hData) {
        dwNewLong = FUN_004a8c9c;
        if (*(int *)(p_Var1 + 0x28) == 0) {
          dwNewLong = _AfxActivationWndProc;
        }
        SetWindowLongA(param_1,-4,(LONG)dwNewLong);
      }
    }
  }
  else {
    CWnd::Attach(this,param_1);
    iVar5 = *(int *)this;
    (**(code **)(iVar5 + 0x54))();
    pLVar2 = (LONG *)(**(code **)(iVar5 + 0x84))();
    puVar3 = (undefined1 *)GetWindowLongA(param_1,-4);
    puVar4 = FUN_004a8a48();
    iVar5 = FUN_004bafca();
    if (*(char *)(iVar5 + 0x14) == '\0') {
      iVar5 = FUN_004bbf67();
      if (*(int *)(iVar5 + 0x20) != 0) {
        iVar6 = FUN_004a86b6();
        if (iVar6 != 0) {
          (**(code **)(iVar5 + 0x20))(param_1,iVar6);
        }
      }
    }
    if (puVar3 != puVar4) {
      puVar3 = FUN_004a8a48();
      LVar7 = SetWindowLongA(param_1,-4,(LONG)puVar3);
      *pLVar2 = LVar7;
    }
    *(undefined4 *)(p_Var1 + 0x14) = 0;
  }
  return;
}


