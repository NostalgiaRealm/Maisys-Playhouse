
/* ==== FUN_004b1ef6 @ 004b1ef6 ==== 
 * signature: undefined __stdcall FUN_004b1ef6(void)
 * body: 004b1ef6-004b1f3d
 */

void FUN_004b1ef6(void)

{
  HDC hDC;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = (int)&PTR_FUN_004cc1a4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  hDC = (HDC)FUN_004b0cd7(extraout_ECX);
  ReleaseDC(*(HWND *)(*(int *)(unaff_EBP + -0x10) + 0x10),hDC);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b1f48();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


