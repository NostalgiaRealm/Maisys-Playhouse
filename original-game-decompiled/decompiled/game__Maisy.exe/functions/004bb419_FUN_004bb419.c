
/* ==== FUN_004bb419 @ 004bb419 ==== 
 * signature: undefined __stdcall FUN_004bb419(void)
 * body: 004bb419-004bb445
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb419(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  _DAT_004e4f68 = &PTR_FUN_004cc38c;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bb450();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


