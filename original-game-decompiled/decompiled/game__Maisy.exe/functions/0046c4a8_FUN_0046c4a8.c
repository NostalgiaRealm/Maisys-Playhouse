
/* ==== FUN_0046c4a8 @ 0046c4a8 ==== 
 * signature: undefined4 __stdcall FUN_0046c4a8(void)
 * body: 0046c4a8-0046c4d8
 */

undefined4 FUN_0046c4a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x34);
  if (*(char *)(unaff_EBP + -0x11) != '\0') {
    if (DAT_004d95bc != (undefined4 *)0x0) {
      (**(code **)*DAT_004d95bc)(1);
    }
    DAT_004d95bc = (undefined4 *)0x0;
  }
  FUN_004a3538();
  return 0x46c497;
}


