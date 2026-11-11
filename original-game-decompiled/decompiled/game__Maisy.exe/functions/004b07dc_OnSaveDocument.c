
/* ==== CDocument::OnSaveDocument @ 004b07dc ==== 
 * signature: int __thiscall OnSaveDocument(CDocument * this, char * param_1)
 * body: 004b07dc-004b092b
 * note: Library Function - Single Match  public: virtual int __thiscall CDocument::OnSaveDocument(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDocument::OnSaveDocument(char const *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDocument::OnSaveDocument(CDocument *this,char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff7c;
  CException::CException((CException *)(unaff_EBP + -0x40));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x30));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x40) = &PTR_FUN_004cc06c;
  CString::operator=((CString *)(unaff_EBP + -0x30),(char *)0x0);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iVar1 = **(int **)(unaff_EBP + -0x18);
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  iVar1 = (**(code **)(iVar1 + 0x88))(*(undefined4 *)(unaff_EBP + 8),0x1012,unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x20) = iVar1;
  if (iVar1 != 0) {
    CArchive::CArchive((CArchive *)(unaff_EBP + -0x84),*(CFile **)(unaff_EBP + -0x20),2,0x1000,
                       (void *)0x0);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
    *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_004bafca();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(iVar2 + 4));
    *(undefined1 *)(unaff_EBP + -4) = 5;
    (**(code **)(*(int *)(unaff_EBP + -0x1c) + 8))(unaff_EBP + -0x84);
    CArchive::Close((CArchive *)(unaff_EBP + -0x84));
    (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x8c))(*(undefined4 *)(unaff_EBP + -0x20),0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004b092c();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x60))(0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004b09ac();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b09d1();
  }
  else {
    (**(code **)(*(int *)(unaff_EBP + -0x1c) + 0x84))
              (*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x40,1,0xf100);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b09d1();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return (uint)(iVar1 != 0);
}


