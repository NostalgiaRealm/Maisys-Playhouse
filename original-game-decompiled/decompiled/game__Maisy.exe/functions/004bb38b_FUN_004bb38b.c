
/* ==== FUN_004bb38b @ 004bb38b ==== 
 * signature: undefined __stdcall FUN_004bb38b(void)
 * body: 004bb38b-004bb3ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb38b(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CException::CException((CException *)&DAT_004e4f68,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _DAT_004e4f74 = 0;
  _DAT_004e4f78 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  _DAT_004e4f68 = &PTR_FUN_004cc38c;
  _DAT_004e4ffc = 0xf024;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


