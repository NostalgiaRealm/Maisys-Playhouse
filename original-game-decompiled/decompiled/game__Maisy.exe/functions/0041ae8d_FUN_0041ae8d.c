
/* ==== FUN_0041ae8d @ 0041ae8d ==== 
 * signature: undefined4 __stdcall FUN_0041ae8d(void)
 * body: 0041ae8d-0041aec8
 */

undefined4 FUN_0041ae8d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xec) = *(undefined4 *)(unaff_EBP + -0x90);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x38))(*(undefined4 *)(unaff_EBP + 8));
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  FUN_004a3538();
  return 0x41a84b;
}


