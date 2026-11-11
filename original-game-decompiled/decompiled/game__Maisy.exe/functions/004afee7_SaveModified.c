
/* ==== CDocument::SaveModified @ 004afee7 ==== 
 * signature: int __thiscall SaveModified(CDocument * this)
 * body: 004afee7-004b0017
 * note: Library Function - Single Match  public: virtual int __thiscall CDocument::SaveModified(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDocument::SaveModified(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDocument::SaveModified(CDocument *this)

{
  CString *pCVar1;
  int iVar2;
  char *pcVar3;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  uint uVar4;
  
  FUN_004919ec();
  iVar2 = (**(code **)(*extraout_ECX + 0x5c))();
  if (iVar2 != 0) {
    pCVar1 = (CString *)(extraout_ECX + 8);
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
    iVar2 = *(int *)pCVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(iVar2 + -8) == 0) {
      CString::operator=((CString *)(unaff_EBP + -0x10),(CString *)(extraout_ECX + 7));
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0) {
        CString::LoadStringA((CString *)(unaff_EBP + -0x10),0xf003);
      }
    }
    else {
      CString::operator=((CString *)(unaff_EBP + -0x10),pCVar1);
      if (DAT_004e5208 != 0) {
        uVar4 = 0x104;
        pcVar3 = (char *)FUN_004ac16a((void *)(unaff_EBP + -0x10),0x104);
        AfxGetFileTitle(*(char **)pCVar1,pcVar3,uVar4);
        CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
      }
    }
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    AfxFormatString1((CString *)(unaff_EBP + -0x14),0xf103,*(char **)(unaff_EBP + -0x10));
    iVar2 = AfxMessageBox(*(char **)(unaff_EBP + -0x14),3,0xf103);
    if (iVar2 == 2) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004b0018();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004b002a();
      iVar2 = 0;
      goto LAB_004aff07;
    }
    if (iVar2 == 6) {
      iVar2 = (**(code **)(*extraout_ECX + 0xa0))();
      if (iVar2 == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004b0018();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004b002a();
        iVar2 = 0;
        goto LAB_004aff07;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004b0018();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b002a();
  }
  iVar2 = 1;
LAB_004aff07:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar2;
}


