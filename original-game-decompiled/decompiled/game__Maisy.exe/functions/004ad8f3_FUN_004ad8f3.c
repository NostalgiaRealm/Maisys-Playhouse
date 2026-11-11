
/* ==== FUN_004ad8f3 @ 004ad8f3 ==== 
 * signature: undefined4 * __stdcall FUN_004ad8f3(void)
 * body: 004ad8f3-004ad952
 */

undefined4 * FUN_004ad8f3(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44(extraout_ECX + 3);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_004cd1ec;
  extraout_ECX[1] = uVar1;
  extraout_ECX[2] = 0;
  FUN_004abc24((CString *)(extraout_ECX + 3));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


