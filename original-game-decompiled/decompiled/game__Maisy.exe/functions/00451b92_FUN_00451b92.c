
/* ==== FUN_00451b92 @ 00451b92 ==== 
 * signature: undefined1 * __stdcall FUN_00451b92(void)
 * body: 00451b92-00451be5
 */

undefined1 * FUN_00451b92(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  uVar1 = *(undefined4 *)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x50) = uVar1;
  (**(code **)(unaff_EBP + -0x20))();
  FUN_004a7be1();
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK((AFX_EXCEPTION_LINK *)(unaff_EBP + -0x5c));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  (**(code **)(*(int *)(unaff_EBP + -0x18) + 0x84))(*(undefined4 *)(unaff_EBP + 8),uVar1,0,0xf101);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00451c06();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  return FUN_00451bf2;
}


