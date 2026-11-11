
/* ==== FUN_004ba9ad @ 004ba9ad ==== 
 * signature: undefined4 * __stdcall FUN_004ba9ad(void)
 * body: 004ba9ad-004baa19
 */

undefined4 * FUN_004ba9ad(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004caff4;
  extraout_ECX[7] = 0;
  extraout_ECX[8] = 0;
  extraout_ECX[9] = 0;
  extraout_ECX[10] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined2 *)(extraout_ECX + 6) = 0;
  *extraout_ECX = &PTR_FUN_004cb2dc;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = uVar1;
  extraout_ECX[10] = 0x1c;
  extraout_ECX[8] = 0x14;
  extraout_ECX[0xc] = 1;
  return extraout_ECX;
}


