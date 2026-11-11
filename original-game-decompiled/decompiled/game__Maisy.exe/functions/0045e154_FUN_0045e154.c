
/* ==== FUN_0045e154 @ 0045e154 ==== 
 * signature: undefined4 __stdcall FUN_0045e154(void)
 * body: 0045e154-0045e17b
 */

undefined4 FUN_0045e154(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x30);
  **(byte **)(unaff_EBP + -0x18) =
       (*(char *)(unaff_EBP + -0x11) << 2 ^ **(byte **)(unaff_EBP + -0x18)) & 4 ^
       **(byte **)(unaff_EBP + -0x18);
  FUN_004a3538();
  return 0x45e102;
}


