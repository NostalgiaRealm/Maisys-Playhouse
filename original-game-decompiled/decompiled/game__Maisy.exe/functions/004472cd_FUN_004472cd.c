
/* ==== FUN_004472cd @ 004472cd ==== 
 * signature: undefined4 __stdcall FUN_004472cd(void)
 * body: 004472cd-004472ef
 */

undefined4 FUN_004472cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x20);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(1,0);
  }
  FUN_004a3538();
  return 0x4472ab;
}


