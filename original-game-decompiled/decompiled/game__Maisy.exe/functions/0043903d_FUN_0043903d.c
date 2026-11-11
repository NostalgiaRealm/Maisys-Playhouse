
/* ==== FUN_0043903d @ 0043903d ==== 
 * signature: undefined4 __stdcall FUN_0043903d(void)
 * body: 0043903d-00439066
 */

undefined4 FUN_0043903d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x24);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  FUN_004a3538();
  return 0x43900e;
}


