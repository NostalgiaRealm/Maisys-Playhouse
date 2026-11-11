
/* ==== FUN_004b1fe9 @ 004b1fe9 ==== 
 * signature: undefined __stdcall FUN_004b1fe9(void)
 * body: 004b1fe9-004b2030
 */

void FUN_004b1fe9(void)

{
  HDC hDC;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = (int)&PTR_FUN_004cc224;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  hDC = (HDC)FUN_004b0cd7(extraout_ECX);
  ReleaseDC(*(HWND *)(*(int *)(unaff_EBP + -0x10) + 0x10),hDC);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b203b();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


