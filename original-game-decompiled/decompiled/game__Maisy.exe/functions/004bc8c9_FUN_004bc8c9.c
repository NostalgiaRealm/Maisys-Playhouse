
/* ==== FUN_004bc8c9 @ 004bc8c9 ==== 
 * signature: undefined __stdcall FUN_004bc8c9(void)
 * body: 004bc8c9-004bc915
 */

void FUN_004bc8c9(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cb184;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_004bc05e((int *)&DAT_004e53c4);
  if ((iVar1 != 0) && (*(code **)(iVar1 + 0x18) != (code *)0x0)) {
    (**(code **)(iVar1 + 0x18))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc920();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


