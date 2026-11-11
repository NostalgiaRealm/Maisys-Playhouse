
/* ==== FUN_004b0934 @ 004b0934 ==== 
 * signature: undefined1 * __stdcall FUN_004b0934(void)
 * body: 004b0934-004b0980
 */

undefined1 * FUN_004b0934(void)

{
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x8c))(*(undefined4 *)(unaff_EBP + -0x20),1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x84))
            (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x24),1,0xf102);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  CException::Delete(*(CException **)(unaff_EBP + -0x24));
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  return FUN_004b098f;
}


