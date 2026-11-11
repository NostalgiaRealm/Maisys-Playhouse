
/* ==== FUN_0048bd95 @ 0048bd95 ==== 
 * signature: undefined4 __stdcall FUN_0048bd95(void)
 * body: 0048bd95-0048bdbe
 */

undefined4 FUN_0048bd95(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x1c);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  FUN_004a3538();
  return 0x48bd73;
}


