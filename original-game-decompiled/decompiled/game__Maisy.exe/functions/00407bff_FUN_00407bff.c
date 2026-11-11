
/* ==== FUN_00407bff @ 00407bff ==== 
 * signature: undefined4 __stdcall FUN_00407bff(void)
 * body: 00407bff-00407c1c
 */

undefined4 FUN_00407bff(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x24);
  iVar1 = (**(code **)(unaff_EBP + -0x1c))();
  FUN_00458980(iVar1);
  FUN_004a3538();
  return 0x407bdf;
}


