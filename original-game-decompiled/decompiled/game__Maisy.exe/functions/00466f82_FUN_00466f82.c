
/* ==== FUN_00466f82 @ 00466f82 ==== 
 * signature: undefined4 __stdcall FUN_00466f82(void)
 * body: 00466f82-00466fb2
 */

undefined4 FUN_00466f82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x30);
  if (*(char *)(unaff_EBP + -0x11) != '\0') {
    if (DAT_004d95bc != (undefined4 *)0x0) {
      (**(code **)*DAT_004d95bc)(1);
    }
    DAT_004d95bc = (undefined4 *)0x0;
  }
  FUN_004a3538();
  return 0x466f53;
}


