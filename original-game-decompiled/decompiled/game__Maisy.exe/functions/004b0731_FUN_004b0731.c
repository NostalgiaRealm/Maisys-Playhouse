
/* ==== FUN_004b0731 @ 004b0731 ==== 
 * signature: undefined1 * __stdcall FUN_004b0731(void)
 * body: 004b0731-004b0783
 */

undefined1 * FUN_004b0731(void)

{
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x8c))(*(undefined4 *)(unaff_EBP + -0x20),1);
  (**(code **)(unaff_EBP + -0x28))();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x84))
            (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x2c),0,0xf101);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  CException::Delete(*(CException **)(unaff_EBP + -0x2c));
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  return FUN_004b0792;
}


