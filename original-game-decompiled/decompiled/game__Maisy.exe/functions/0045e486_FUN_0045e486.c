
/* ==== FUN_0045e486 @ 0045e486 ==== 
 * signature: undefined4 __stdcall FUN_0045e486(void)
 * body: 0045e486-0045e4b4
 */

undefined4 FUN_0045e486(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x34);
  **(byte **)(unaff_EBP + -0x18) =
       (*(char *)(unaff_EBP + -0x11) << 2 ^ **(byte **)(unaff_EBP + -0x18)) & 4 ^
       **(byte **)(unaff_EBP + -0x18);
  DAT_004dbdc4 = 0;
  FUN_004a3538();
  return 0x45e464;
}


