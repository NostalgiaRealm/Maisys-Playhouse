
/* ==== FUN_0046ab24 @ 0046ab24 ==== 
 * signature: undefined4 __stdcall FUN_0046ab24(void)
 * body: 0046ab24-0046ab88
 */

undefined4 FUN_0046ab24(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + -0x44);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))(1,0);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  if (*(char *)(unaff_EBP + -0x12) != '\0') {
    if (DAT_004d95bc != (undefined4 *)0x0) {
      (**(code **)*DAT_004d95bc)(1);
    }
    DAT_004d95bc = (undefined4 *)0x0;
    DAT_004d95c0 = 0;
  }
  if (*(char *)(unaff_EBP + -0x11) != '\0') {
    (**(code **)(*(int *)(unaff_EBP + -0x20) + 0x1f8))(0);
    FUN_0047dc10();
  }
  FUN_004a3538();
  return 0x46aaf0;
}


