
/* ==== CDocManager::DoPromptFileName @ 004b57e1 ==== 
 * signature: int __thiscall DoPromptFileName(CDocManager * this, CString * param_1, uint param_2, ulong param_3, int param_4, CDocTemplate * param_5)
 * body: 004b57e1-004b5983
 * note: Library Function - Single Match  public: virtual int __thiscall CDocManager::DoPromptFileName(class CString &,unsigned int,unsigned long,int,class CDocTemplate *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDocManager::DoPromptFileName(class CString &,unsigned
   int,unsigned long,int,class CDocTemplate *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CDocManager::DoPromptFileName
          (CDocManager *this,CString *param_1,uint param_2,ulong param_3,int param_4,
          CDocTemplate *param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CFileDialog::CFileDialog
            ((CFileDialog *)(unaff_EBP + -0x218),*(int *)(unaff_EBP + 0x14),(char *)0x0,(char *)0x0,
             6,(char *)0x0,(CWnd *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x18));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  CString::LoadStringA((CString *)(unaff_EBP + -0x18),*(uint *)(unaff_EBP + 0xc));
  *(uint *)(unaff_EBP + -0x188) = *(uint *)(unaff_EBP + -0x188) | *(uint *)(unaff_EBP + 0x10);
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x1c));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(CDocTemplate **)(unaff_EBP + 0x18) == (CDocTemplate *)0x0) {
    iVar4 = *(int *)(extraout_ECX + 8);
    bVar2 = true;
    *(int *)(unaff_EBP + -0x10) = iVar4;
    while (iVar4 != 0) {
      puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar1;
      AppendFilterSuffix((CString *)(unaff_EBP + -0x14),(tagOFNA *)(unaff_EBP + -0x1bc),
                         (CDocTemplate *)puVar1[2],(CString *)(!bVar2 - 1 & unaff_EBP - 0x1cU));
      bVar2 = false;
      iVar4 = *(int *)(unaff_EBP + -0x10);
    }
  }
  else {
    AppendFilterSuffix((CString *)(unaff_EBP + -0x14),(tagOFNA *)(unaff_EBP + -0x1bc),
                       *(CDocTemplate **)(unaff_EBP + 0x18),(CString *)(unaff_EBP + -0x1c));
  }
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x20));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  CString::LoadStringA((CString *)(unaff_EBP + -0x20),0xf002);
  CString::operator+=((CString *)(unaff_EBP + -0x14),(CString *)(unaff_EBP + -0x20));
  CString::operator+=((CString *)(unaff_EBP + -0x14),'\0');
  CString::operator+=((CString *)(unaff_EBP + -0x14),(char *)&DAT_004da434);
  CString::operator+=((CString *)(unaff_EBP + -0x14),'\0');
  *(int *)(unaff_EBP + -0x1a8) = *(int *)(unaff_EBP + -0x1a8) + 1;
  *(undefined4 *)(unaff_EBP + -0x1b0) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x18c) = *(undefined4 *)(unaff_EBP + -0x18);
  uVar3 = FUN_004ac16a(*(void **)(unaff_EBP + 8),0x104);
  *(undefined4 *)(unaff_EBP + -0x1a0) = uVar3;
  iVar4 = CFileDialog::DoModal((CFileDialog *)(unaff_EBP + -0x218));
  *(int *)(unaff_EBP + -0x10) =
       (*(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x10)) - (uint)(iVar4 == 1);
  *(int *)(unaff_EBP + -0x10) = -*(int *)(unaff_EBP + -0x10);
  CString::ReleaseBuffer(*(CString **)(unaff_EBP + 8),-1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004b5984();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004b598c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004b5994();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004b599c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b59ae();
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar4;
}


