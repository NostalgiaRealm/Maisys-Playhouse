
/* ==== FUN_004bb325 @ 004bb325 ==== 
 * signature: undefined __stdcall FUN_004bb325(void)
 * body: 004bb325-004bb351
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb325(void)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  _DAT_004e5018 = &PTR_FUN_004cc36c;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bb35c();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


