
/* ==== FUN_004b4718 @ 004b4718 ==== 
 * signature: undefined __stdcall FUN_004b4718(void)
 * body: 004b4718-004b4777
 */

void FUN_004b4718(void)

{
  int *piVar1;
  CDocManager *this;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  piVar1 = (int *)(extraout_ECX + 0x78);
  if (*piVar1 == 0) {
    this = (CDocManager *)FUN_004a5fed(0x20);
    *(CDocManager **)(unaff_EBP + -0x10) = this;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = 0;
    if (this != (CDocManager *)0x0) {
      iVar2 = CDocManager::CDocManager(this);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *piVar1 = iVar2;
  }
  (**(code **)(*(int *)*piVar1 + 0x14))(*(undefined4 *)(unaff_EBP + 8));
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


