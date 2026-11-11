
/* ==== FUN_004b9df4 @ 004b9df4 ==== 
 * signature: undefined __stdcall FUN_004b9df4(void)
 * body: 004b9df4-004b9e55
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9df4(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CException::CException((CException *)&DAT_004e3580,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _DAT_004e358c = 0;
  _DAT_004e3590 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  _DAT_004e3580 = &PTR_FUN_004cad44;
  _DAT_004e3614 = 0xf021;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


