
/* ==== CDocument::OnOpenDocument @ 004b05aa ==== 
 * signature: int __thiscall OnOpenDocument(CDocument * this, char * param_1)
 * body: 004b05aa-004b0728
 * note: Library Function - Single Match  public: virtual int __thiscall CDocument::OnOpenDocument(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDocument::OnOpenDocument(char const *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDocument::OnOpenDocument(CDocument *this,char *param_1)

{
  code *pcVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(int **)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff74;
  iVar2 = *extraout_ECX;
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  (**(code **)(iVar2 + 0x5c))();
  CException::CException((CException *)(unaff_EBP + -0x48));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x38));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_004cc06c;
  CString::operator=((CString *)(unaff_EBP + -0x38),(char *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iVar2 = (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x88))
                    (*(undefined4 *)(unaff_EBP + 8),0x20,unaff_EBP + -0x48);
  *(int *)(unaff_EBP + -0x20) = iVar2;
  if (iVar2 == 0) {
    (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x84))
              (*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x48,0,0xf101);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b07d4();
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x70);
    (**(code **)(unaff_EBP + -0x28))();
    pcVar1 = *(code **)(*(int *)(unaff_EBP + -0x1c) + 0x60);
    *(code **)(unaff_EBP + -0x24) = pcVar1;
    (*pcVar1)(1);
    CArchive::CArchive((CArchive *)(unaff_EBP + -0x8c),*(CFile **)(unaff_EBP + -0x20),3,0x1000,
                       (void *)0x0);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(undefined4 *)(unaff_EBP + -0x88) = 0;
    *(undefined4 *)(unaff_EBP + -0x8c) = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_004bafca();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(iVar2 + 4));
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x20) + 0x38))();
    if (iVar2 != 0) {
      (**(code **)(*(int *)(unaff_EBP + -0x1c) + 8))(unaff_EBP + -0x8c);
    }
    CArchive::Close((CArchive *)(unaff_EBP + -0x8c));
    (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x8c))(*(undefined4 *)(unaff_EBP + -0x20),0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004b0729();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    (**(code **)(unaff_EBP + -0x24))(0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004b07af();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b07d4();
    iVar2 = 1;
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar2;
}


