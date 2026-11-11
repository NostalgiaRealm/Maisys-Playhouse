
/* ==== DDV_MaxChars @ 004b4ffb ==== 
 * signature: void __stdcall DDV_MaxChars(CDataExchange * param_1, CString * param_2, int param_3)
 * body: 004b4ffb-004b5078;004b508b-004b50b9
 * note: Library Function - Single Match  void __stdcall DDV_MaxChars(class CDataExchange *,class CString const &,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDV_MaxChars(class CDataExchange *,class CString const &,int)
   
   Library: Visual Studio 1998 Release */

void DDV_MaxChars(CDataExchange *param_1,CString *param_2,int param_3)

{
  CDataExchange *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = *(CDataExchange **)(unaff_EBP + 8);
  if ((*(int *)this == 0) ||
     (*(int *)(**(int **)(unaff_EBP + 0xc) + -8) <= *(int *)(unaff_EBP + 0x10))) {
    if ((*(HWND *)(this + 8) != (HWND)0x0) && (*(int *)(this + 0xc) != 0)) {
      SendMessageA(*(HWND *)(this + 8),0xc5,*(WPARAM *)(unaff_EBP + 0x10),0);
    }
  }
  else {
    wsprintfA((LPSTR)(unaff_EBP + -0x30),&DAT_004db558,*(int *)(unaff_EBP + 0x10));
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    AfxFormatString1((CString *)(unaff_EBP + -0x10),0xf114,(char *)(unaff_EBP + -0x30));
    AfxMessageBox(*(char **)(unaff_EBP + -0x10),0x30,0xf114);
    FUN_004abc24((CString *)(unaff_EBP + -0x10));
    CDataExchange::Fail(this);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b5083();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


