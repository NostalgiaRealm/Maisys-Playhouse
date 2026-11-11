
/* ==== FUN_004a6fca @ 004a6fca ==== 
 * signature: undefined4 __stdcall FUN_004a6fca(void)
 * body: 004a6fca-004a6ff3
 */

undefined4 FUN_004a6fca(void)

{
  int iVar1;
  int unaff_EBP;
  
  CWnd::Detach((CWnd *)(unaff_EBP + -0x60));
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 0x18) = 1;
  SetEvent(*(HANDLE *)(iVar1 + 0x10));
  FUN_004a7166(0xffffffff,0);
  return 0x4a6f92;
}


