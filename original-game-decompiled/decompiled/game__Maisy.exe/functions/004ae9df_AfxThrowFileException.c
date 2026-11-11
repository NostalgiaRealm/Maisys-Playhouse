
/* ==== AfxThrowFileException @ 004ae9df ==== 
 * signature: void __stdcall AfxThrowFileException(int param_1, long param_2, char * param_3)
 * body: 004ae9df-004aea42;004aea56-004aea81
 * note: Library Function - Single Match  void __stdcall AfxThrowFileException(int,long,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxThrowFileException(int,long,char const *)
   
   Library: Visual Studio 1998 Release */

void AfxThrowFileException(int param_1,long param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  CException *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CException *)FUN_004a5fed(0x14);
  *(CException **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (CException *)0x0) {
    this = (CException *)0x0;
  }
  else {
    CException::CException(this);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004abb44((undefined4 *)(this + 0x10));
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
    uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
    pcVar3 = *(char **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined ***)this = &PTR_FUN_004cc06c;
    *(undefined4 *)(this + 8) = uVar1;
    *(undefined4 *)(this + 0xc) = uVar2;
    CString::operator=((CString *)(this + 0x10),pcVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(CException **)(unaff_EBP + -0x14) = this;
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_004d8298);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


