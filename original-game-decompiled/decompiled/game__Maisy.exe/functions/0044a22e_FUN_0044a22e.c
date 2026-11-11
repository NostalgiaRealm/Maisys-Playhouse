
/* ==== FUN_0044a22e @ 0044a22e ==== 
 * signature: undefined4 __stdcall FUN_0044a22e(void)
 * body: 0044a22e-0044a283
 */

undefined4 FUN_0044a22e(void)

{
  char cVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x34);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_0048ce85();
    return 0x44a1c0;
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x9c) != -1) {
    **(byte **)(unaff_EBP + -0x20) = **(byte **)(unaff_EBP + -0x20) | 2;
  }
  if (((**(byte **)(unaff_EBP + -0x20) & 2) == 0) &&
     (cVar1 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x1b0))(), cVar1 != '\0')) {
    return 0x44a1c0;
  }
  **(byte **)(unaff_EBP + -0x20) = **(byte **)(unaff_EBP + -0x20) | 2;
  return 0x44a1c0;
}


