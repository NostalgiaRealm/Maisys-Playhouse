
/* ==== FUN_004a4515 @ 004a4515 ==== 
 * signature: undefined4 __stdcall FUN_004a4515(void)
 * body: 004a4515-004a45a0
 */

undefined4 FUN_004a4515(void)

{
  int iVar1;
  undefined4 uVar2;
  CString *this;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar4 = *(int *)(unaff_EBP + 0xc);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar3 = *(int *)(unaff_EBP + 0x10);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar1 = *(int *)(*(int *)this + -8);
  if (iVar1 < iVar4 + iVar3) {
    iVar3 = iVar1 - iVar4;
  }
  if (iVar1 < iVar4) {
    iVar3 = 0;
  }
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  CString::AllocCopy(this,(CString *)(unaff_EBP + -0x10),iVar3,iVar4,0);
  CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a45ba();
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar2;
}


