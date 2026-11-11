
/* ==== FUN_0044dbe2 @ 0044dbe2 ==== 
 * signature: undefined4 __stdcall FUN_0044dbe2(void)
 * body: 0044dbe2-0044dc0b
 */

undefined4 FUN_0044dbe2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(byte *)(unaff_EBP + -0x30) = *(byte *)(unaff_EBP + -0x30) | 1;
  FUN_0042ff10((void *)**(undefined4 **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 8),
               (void *)(unaff_EBP + -0x48));
  return 0x44dbd4;
}


