
/* ==== FUN_0041c24b @ 0041c24b ==== 
 * signature: undefined4 __stdcall FUN_0041c24b(void)
 * body: 0041c24b-0041c274
 */

undefined4 FUN_0041c24b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x7c) = *(undefined4 *)(unaff_EBP + -0x60);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  FUN_004a3538();
  return 0x41bf1e;
}


