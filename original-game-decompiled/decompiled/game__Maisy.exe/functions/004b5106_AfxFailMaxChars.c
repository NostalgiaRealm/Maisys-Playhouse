
/* ==== AfxFailMaxChars @ 004b5106 ==== 
 * signature: void __stdcall AfxFailMaxChars(CDataExchange * param_1, int param_2)
 * body: 004b5106-004b5181
 * note: Library Function - Single Match  void __stdcall AfxFailMaxChars(class CDataExchange *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxFailMaxChars(class CDataExchange *,int)
   
   Library: Visual Studio 1998 Release */

void AfxFailMaxChars(CDataExchange *param_1,int param_2)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  wsprintfA((LPSTR)(unaff_EBP + -0x30),&DAT_004db558,*(undefined4 *)(unaff_EBP + 0xc));
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  AfxFormatString1((CString *)(unaff_EBP + -0x10),0xf114,(char *)(unaff_EBP + -0x30));
  AfxMessageBox(*(char **)(unaff_EBP + -0x10),0x30,0xf114);
  FUN_004abc24((CString *)(unaff_EBP + -0x10));
  CDataExchange::Fail(*(CDataExchange **)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b518c();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


