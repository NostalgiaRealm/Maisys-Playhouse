
/* ==== FUN_004494ae @ 004494ae ==== 
 * signature: undefined4 __stdcall FUN_004494ae(void)
 * body: 004494ae-004494e8
 */

undefined4 FUN_004494ae(void)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x38);
  puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x152);
  *(undefined4 **)(unaff_EBP + -0x18) = puVar2;
  pvVar1 = (HGLOBAL)*puVar2;
  if (pvVar1 != (HGLOBAL)0x0) {
    FUN_0043f7a0(pvVar1);
    **(undefined4 **)(unaff_EBP + -0x18) = 0;
  }
  (**(code **)(*(int *)(unaff_EBP + -0x20) + 0xfc))();
  return 0x4494a0;
}


