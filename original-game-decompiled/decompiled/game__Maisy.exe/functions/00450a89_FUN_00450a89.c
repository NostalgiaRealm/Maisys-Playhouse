
/* ==== FUN_00450a89 @ 00450a89 ==== 
 * signature: undefined4 __stdcall FUN_00450a89(void)
 * body: 00450a89-00450ab2
 */

undefined4 FUN_00450a89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x24);
  *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x30);
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x2c))(1);
  }
  FUN_004a3538();
  return 0x450a35;
}


