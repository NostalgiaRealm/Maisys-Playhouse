
/* ==== FUN_004a86b6 @ 004a86b6 ==== 
 * signature: undefined4 __stdcall FUN_004a86b6(void)
 * body: 004a86b6-004a877a
 */

undefined4 FUN_004a86b6(void)

{
  undefined4 uVar1;
  CWnd *pCVar2;
  _AFX_THREAD_STATE *p_Var3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  _AFX_THREAD_STATE *p_Var6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb4;
  p_Var3 = AfxGetThreadState();
  *(_AFX_THREAD_STATE **)(unaff_EBP + -0x14) = p_Var3 + 0x38;
  p_Var6 = p_Var3 + 0x38;
  puVar7 = (undefined4 *)(unaff_EBP + -0x4c);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(undefined4 *)p_Var6;
    p_Var6 = p_Var6 + 4;
    puVar7 = puVar7 + 1;
  }
  iVar5 = *(int *)(unaff_EBP + 0x10);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x18);
  **(undefined4 **)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  uVar1 = *(undefined4 *)(unaff_EBP + 0x14);
  *(int *)(p_Var3 + 0x3c) = iVar5;
  *(undefined4 *)(p_Var3 + 0x40) = uVar1;
  *(undefined4 *)(p_Var3 + 0x44) = uVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pCVar2 = *(CWnd **)(unaff_EBP + 8);
  if ((iVar5 == 2) && (*(int **)(pCVar2 + 0x34) != (int *)0x0)) {
    (**(code **)(**(int **)(pCVar2 + 0x34) + 0x60))(0);
  }
  if (iVar5 == 0x110) {
    _AfxPreInitDialog(pCVar2,(tagRECT *)(unaff_EBP + -0x30),(ulong *)(unaff_EBP + -0x20));
  }
  uVar4 = (**(code **)(*(int *)pCVar2 + 0x9c))(iVar5,uVar1,*(undefined4 *)(unaff_EBP + 0x18));
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  if (iVar5 == 0x110) {
    _AfxPostInitDialog(pCVar2,(tagRECT *)(unaff_EBP + -0x30),*(ulong *)(unaff_EBP + -0x20));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puVar7 = (undefined4 *)(unaff_EBP + -0x4c);
  puVar8 = *(undefined4 **)(unaff_EBP + -0x14);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar4;
}


