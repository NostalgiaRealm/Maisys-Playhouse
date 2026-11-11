
/* ==== FUN_004a4662 @ 004a4662 ==== 
 * signature: undefined4 __stdcall FUN_004a4662(void)
 * body: 004a4662-004a46da
 */

undefined4 FUN_004a4662(void)

{
  undefined4 uVar1;
  CString *this;
  int unaff_EBP;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = *(int *)(unaff_EBP + 0xc);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (*(int *)(*(int *)this + -8) < iVar2) {
    iVar2 = *(int *)(*(int *)this + -8);
  }
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  CString::AllocCopy(this,(CString *)(unaff_EBP + -0x10),iVar2,0,0);
  CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a46f4();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


