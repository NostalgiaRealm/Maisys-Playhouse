
/* ==== FUN_004abf8d @ 004abf8d ==== 
 * signature: undefined4 __stdcall FUN_004abf8d(void)
 * body: 004abf8d-004ac000
 */

undefined4 FUN_004abf8d(void)

{
  LPCSTR lpString;
  undefined4 uVar1;
  int unaff_EBP;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  lpString = *(LPCSTR *)(unaff_EBP + 0x10);
  if (lpString != (LPCSTR)0x0) {
    iVar2 = lstrlenA(lpString);
  }
  CString::ConcatCopy((CString *)(unaff_EBP + -0x10),
                      *(int *)((char *)**(undefined4 **)(unaff_EBP + 0xc) + -8),
                      (char *)**(undefined4 **)(unaff_EBP + 0xc),iVar2,lpString);
  CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004ac01a();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


