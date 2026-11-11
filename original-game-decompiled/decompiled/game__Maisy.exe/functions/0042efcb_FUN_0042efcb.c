
/* ==== FUN_0042efcb @ 0042efcb ==== 
 * signature: undefined4 __stdcall FUN_0042efcb(void)
 * body: 0042efcb-0042efed
 */

undefined4 FUN_0042efcb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x24);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
  }
  FUN_004a3538();
  return 0x42ef9c;
}


