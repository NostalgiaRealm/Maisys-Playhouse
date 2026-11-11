
/* ==== FUN_004b9d00 @ 004b9d00 ==== 
 * signature: undefined __stdcall FUN_004b9d00(void)
 * body: 004b9d00-004b9d61
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9d00(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CException::CException((CException *)&DAT_004e34e8,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _DAT_004e34f4 = 0;
  _DAT_004e34f8 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  _DAT_004e34e8 = &PTR_FUN_004cad04;
  _DAT_004e357c = 0xf023;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


