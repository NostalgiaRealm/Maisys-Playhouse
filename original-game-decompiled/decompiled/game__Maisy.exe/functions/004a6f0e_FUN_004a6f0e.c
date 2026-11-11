
/* ==== FUN_004a6f0e @ 004a6f0e ==== 
 * signature: undefined4 __stdcall FUN_004a6f0e(void)
 * body: 004a6f0e-004a6fc9;004a6ff4-004a703f
 */

undefined4 FUN_004a6f0e(void)

{
  HWND__ *pHVar1;
  HANDLE hHandle;
  code *pcVar2;
  _AFX_THREAD_STATE *p_Var3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_EBP;
  int *piVar8;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 4);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffa0;
  CWnd::CWnd((CWnd *)(unaff_EBP + -0x60));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  p_Var3 = AfxGetThreadState();
  *(undefined4 *)(p_Var3 + 4) = *(undefined4 *)(**(int **)(unaff_EBP + 8) + 4);
  pAVar4 = AfxGetModuleThreadState();
  *(undefined4 *)(pAVar4 + 4) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(pAVar4 + 0x28) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0xc);
  FUN_004a719d();
  iVar5 = FUN_004bafca();
  piVar8 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
  if (((*piVar8 == 0) && (iVar5 = *(int *)(*(int *)(iVar5 + 4) + 0x1c), iVar5 != 0)) &&
     (pHVar1 = *(HWND__ **)(iVar5 + 0x1c), pHVar1 != (HWND__ *)0x0)) {
    CWnd::Attach((CWnd *)(unaff_EBP + -0x60),pHVar1);
    *piVar8 = unaff_EBP + -0x60;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  hHandle = *(HANDLE *)(*(int *)(unaff_EBP + 8) + 0x14);
  SetEvent(*(HANDLE *)(*(int *)(unaff_EBP + 8) + 0x10));
  WaitForSingleObject(hHandle,0xffffffff);
  CloseHandle(hHandle);
  pcVar2 = *(code **)(*(int *)(unaff_EBP + -0x14) + 0x50);
  if (pcVar2 == (code *)0x0) {
    iVar5 = **(int **)(unaff_EBP + -0x14);
    iVar7 = (**(code **)(iVar5 + 0x54))();
    if (iVar7 == 0) {
      uVar6 = (**(code **)(iVar5 + 0x6c))();
    }
    else {
      uVar6 = (**(code **)(iVar5 + 0x58))();
    }
  }
  else {
    uVar6 = (*pcVar2)(*(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4c));
  }
  CWnd::Detach((CWnd *)(unaff_EBP + -0x60));
  FUN_004a7166(uVar6,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a704a();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return 0;
}


