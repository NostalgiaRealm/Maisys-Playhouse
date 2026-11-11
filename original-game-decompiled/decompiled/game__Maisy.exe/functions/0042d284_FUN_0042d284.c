
/* ==== FUN_0042d284 @ 0042d284 ==== 
 * signature: undefined4 __stdcall FUN_0042d284(void)
 * body: 0042d284-0042d2a6
 */

undefined4 FUN_0042d284(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x1c);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
  }
  FUN_004a3538();
  return 0x42d262;
}


