
/* ==== FUN_0047d422 @ 0047d422 ==== 
 * signature: undefined4 __stdcall FUN_0047d422(void)
 * body: 0047d422-0047d46b
 */

undefined4 FUN_0047d422(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x30);
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))(1,0);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (*(char *)(unaff_EBP + -0x11) != '\0') {
    if (DAT_004d95bc != (undefined4 *)0x0) {
      (**(code **)*DAT_004d95bc)(1);
    }
    DAT_004d95bc = (undefined4 *)0x0;
  }
  FUN_004a3538();
  return 0x47d3f3;
}


