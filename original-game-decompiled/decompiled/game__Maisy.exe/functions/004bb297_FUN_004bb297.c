
/* ==== FUN_004bb297 @ 004bb297 ==== 
 * signature: undefined __stdcall FUN_004bb297(void)
 * body: 004bb297-004bb2f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb297(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CException::CException((CException *)&DAT_004e5018,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _DAT_004e5024 = 0;
  _DAT_004e5028 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  _DAT_004e5018 = &PTR_FUN_004cc36c;
  _DAT_004e50ac = 0xf022;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


