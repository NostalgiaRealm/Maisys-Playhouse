
/* ==== FUN_004aefd4 @ 004aefd4 ==== 
 * signature: undefined4 __stdcall FUN_004aefd4(void)
 * body: 004aefd4-004af056
 */

undefined4 FUN_004aefd4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  CFile *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  uint uVar3;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  CFile::GetStatus(this,(CFileStatus *)(unaff_EBP + -300));
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar3 = 0x100;
  pcVar2 = (char *)FUN_004ac16a((void *)(unaff_EBP + -0x10),0x100);
  AfxGetFileName((char *)(unaff_EBP + -0x11a),pcVar2,uVar3);
  CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
  CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004af070();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


