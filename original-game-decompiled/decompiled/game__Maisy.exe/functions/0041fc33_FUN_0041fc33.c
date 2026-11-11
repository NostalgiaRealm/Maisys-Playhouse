
/* ==== FUN_0041fc33 @ 0041fc33 ==== 
 * signature: undefined4 __stdcall FUN_0041fc33(void)
 * body: 0041fc33-0041fc5c
 */

undefined4 FUN_0041fc33(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x78);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_004a3538();
  return 0x41f834;
}


