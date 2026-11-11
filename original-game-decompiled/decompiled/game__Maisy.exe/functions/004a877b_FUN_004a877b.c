
/* ==== FUN_004a877b @ 004a877b ==== 
 * signature: undefined4 __stdcall FUN_004a877b(void)
 * body: 004a877b-004a879d
 */

undefined4 FUN_004a877b(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  piVar1 = (int *)FUN_004a7052();
  uVar2 = (**(code **)(*piVar1 + 0x70))
                    (*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  CException::Delete(*(CException **)(unaff_EBP + -0x1c));
  return 0x4a8751;
}


