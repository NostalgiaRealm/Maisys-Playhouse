
/* ==== FUN_00477bf7 @ 00477bf7 ==== 
 * signature: undefined4 __stdcall FUN_00477bf7(void)
 * body: 00477bf7-00477c1c
 */

undefined4 FUN_00477bf7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x38);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_00486ce0(*(int *)(unaff_EBP + -0x1c));
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 4))();
  }
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return 0x477bbf;
}


