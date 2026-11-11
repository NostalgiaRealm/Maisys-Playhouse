
/* ==== FUN_004a7457 @ 004a7457 ==== 
 * signature: bool __thiscall FUN_004a7457(void * this, int param_1)
 * body: 004a7457-004a7555
 */

bool __thiscall FUN_004a7457(void *this,int param_1)

{
  CWnd *pCVar1;
  CWnd *pCVar2;
  CWnd *this_00;
  BOOL BVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  
  if (param_1 < 1) {
    pCVar2 = *(CWnd **)((int)this + 0x1c);
    if (((pCVar2 != (CWnd *)0x0) && (*(HWND *)(pCVar2 + 0x1c) != (HWND)0x0)) &&
       (BVar3 = IsWindowVisible(*(HWND *)(pCVar2 + 0x1c)), BVar3 != 0)) {
      FUN_004a86b6();
      CWnd::SendMessageToDescendants(*(HWND__ **)(pCVar2 + 0x1c),0x363,1,0,1,1);
    }
    pAVar4 = AfxGetModuleThreadState();
    for (this_00 = *(CWnd **)(pAVar4 + 8); this_00 != (CWnd *)0x0;
        this_00 = *(CWnd **)(this_00 + 0x54)) {
      if ((*(int *)(this_00 + 0x1c) != 0) && (this_00 != pCVar2)) {
        pCVar1 = this_00 + 0x88;
        if (*(int *)pCVar1 == 0) {
          CWnd::ShowWindow(this_00,0);
        }
        BVar3 = IsWindowVisible(*(HWND *)(this_00 + 0x1c));
        if ((BVar3 != 0) || (-1 < *(int *)pCVar1)) {
          FUN_004a86b6();
          CWnd::SendMessageToDescendants(*(HWND__ **)(this_00 + 0x1c),0x363,1,0,1,1);
        }
        if (0 < *(int *)pCVar1) {
          CWnd::ShowWindow(this_00,*(int *)pCVar1);
        }
        *(int *)pCVar1 = -1;
      }
    }
  }
  else if ((-1 < param_1) && (pAVar4 = AfxGetModuleThreadState(), *(int *)(pAVar4 + 0x10) == 0)) {
    FUN_004ae693();
    FUN_004ae69c();
  }
  return param_1 < 0;
}


