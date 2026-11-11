
/* ==== FUN_004104b5 @ 004104b5 ==== 
 * signature: undefined4 __stdcall FUN_004104b5(void)
 * body: 004104b5-00410504
 */

undefined4 FUN_004104b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x24);
  if ((int *)**(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    (**(code **)(*(int *)**(int **)(unaff_EBP + -0x14) + 4))(1);
  }
  if ((int *)**(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(*(int *)**(int **)(unaff_EBP + -0x18) + 4))(1);
  }
  if ((int *)**(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    (**(code **)(*(int *)**(int **)(unaff_EBP + -0x20) + 4))(1);
  }
  if ((undefined4 *)**(int **)(unaff_EBP + -0x1c) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(unaff_EBP + -0x1c))(1);
  }
  FUN_004a3538();
  return 0x410499;
}


