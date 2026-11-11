
/* ==== FUN_00450404 @ 00450404 ==== 
 * signature: undefined4 __stdcall FUN_00450404(void)
 * body: 00450404-0045042d
 */

undefined4 FUN_00450404(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x20);
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x1c))(1);
  }
  FUN_004a3538();
  return 0x4503e3;
}


