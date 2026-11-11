
/* ==== FUN_0041bb2e @ 0041bb2e ==== 
 * signature: undefined4 __stdcall FUN_0041bb2e(void)
 * body: 0041bb2e-0041bb69
 */

undefined4 FUN_0041bb2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0x9c);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x38))(*(undefined4 *)(unaff_EBP + 0xc));
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  FUN_004a3538();
  return 0x41b4e4;
}


