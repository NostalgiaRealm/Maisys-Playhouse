
/* ==== FUN_004a8b7f @ 004a8b7f ==== 
 * signature: undefined4 __stdcall FUN_004a8b7f(void)
 * body: 004a8b7f-004a8bba
 */

undefined4 FUN_004a8b7f(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x14);
  piVar1 = (int *)FUN_004a7052();
  uVar2 = (**(code **)(*piVar1 + 0x70))(*(undefined4 *)(unaff_EBP + -0x1c),unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  CException::Delete(*(CException **)(unaff_EBP + -0x1c));
  return 0x4a8b62;
}


