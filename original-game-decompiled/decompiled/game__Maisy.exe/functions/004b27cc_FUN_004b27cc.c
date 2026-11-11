
/* ==== FUN_004b27cc @ 004b27cc ==== 
 * signature: undefined __stdcall FUN_004b27cc(void)
 * body: 004b27cc-004b2820
 */

void FUN_004b27cc(void)

{
  int iVar1;
  CWnd *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CPaintDC::CPaintDC((CPaintDC *)(unaff_EBP + -0x60),extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = *(int *)extraout_ECX;
  (**(code **)(iVar1 + 0xe0))(unaff_EBP + -0x60,0);
  (**(code **)(iVar1 + 0xf4))(unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b2821();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


