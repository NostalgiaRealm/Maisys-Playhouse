
/* ==== AfxThrowArchiveException @ 004b3832 ==== 
 * signature: void __stdcall AfxThrowArchiveException(int param_1, char * param_2)
 * body: 004b3832-004b388f;004b38a3-004b38ce
 * note: Library Function - Single Match  void __stdcall AfxThrowArchiveException(int,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxThrowArchiveException(int,char const *)
   
   Library: Visual Studio 1998 Release */

void AfxThrowArchiveException(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  CException *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CException *)FUN_004a5fed(0x10);
  *(CException **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (CException *)0x0) {
    this = (CException *)0x0;
  }
  else {
    CException::CException(this);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004abb44((undefined4 *)(this + 0xc));
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
    pcVar2 = *(char **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined ***)this = &PTR_FUN_004cd6ec;
    *(undefined4 *)(this + 8) = uVar1;
    CString::operator=((CString *)(this + 0xc),pcVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(CException **)(unaff_EBP + -0x14) = this;
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_004d8348);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


