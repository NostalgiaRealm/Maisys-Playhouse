
/* ==== FUN_004ad970 @ 004ad970 ==== 
 * signature: undefined4 __stdcall FUN_004ad970(void)
 * body: 004ad970-004ada29
 */

undefined4 FUN_004ad970(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cacec;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44(extraout_ECX + 3);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  **(undefined4 **)(unaff_EBP + -0x10) = &PTR_FUN_004cd1ec;
  FUN_004abc24((CString *)(extraout_ECX + 3));
  CException::CException((CException *)(unaff_EBP + -0x24));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_FUN_004cc06c;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  CString::operator=((CString *)(unaff_EBP + -0x14),(char *)0x0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = CFile::Open(*(CFile **)(unaff_EBP + -0x10),*(char **)(unaff_EBP + 8),
                      *(uint *)(unaff_EBP + 0xc),(CFileException *)(unaff_EBP + -0x24));
  if (iVar2 == 0) {
    AfxThrowFileException
              (*(int *)(unaff_EBP + -0x1c),*(long *)(unaff_EBP + -0x18),
               *(char **)(unaff_EBP + -0x14));
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004ada3a();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


