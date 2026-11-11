
/* ==== FUN_004a92e2 @ 004a92e2 ==== 
 * signature: BOOL __fastcall FUN_004a92e2(CWnd * param_1)
 * body: 004a92e2-004a933b
 */

BOOL __fastcall FUN_004a92e2(CWnd *param_1)

{
  CWnd *pCVar1;
  BOOL BVar2;
  CMapPtrToPtr *this;
  int iVar3;
  void *local_4;
  
  pCVar1 = param_1 + 0x1c;
  if (*(int *)pCVar1 == 0) {
    BVar2 = 0;
  }
  else {
    this = (CMapPtrToPtr *)FID_conflict_afxMapHGDIOBJ();
    iVar3 = CMapPtrToPtr::Lookup(this,*(void **)pCVar1,&local_4);
    if (*(int **)(param_1 + 0x38) == (int *)0x0) {
      BVar2 = DestroyWindow(*(HWND *)pCVar1);
    }
    else {
      BVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x54))();
    }
    if (iVar3 == 0) {
      CWnd::Detach(param_1);
    }
  }
  return BVar2;
}


