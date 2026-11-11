
/* ==== AfxFailRadio @ 004b5194 ==== 
 * signature: void __stdcall AfxFailRadio(CDataExchange * param_1)
 * body: 004b5194-004b51f6
 * note: Library Function - Single Match  void __stdcall AfxFailRadio(class CDataExchange *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxFailRadio(class CDataExchange *)
   
   Library: Visual Studio 1998 Release */

void AfxFailRadio(CDataExchange *param_1)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  AfxFormatStrings((CString *)(unaff_EBP + -0x10),0xf115,(char **)0x0,0);
  AfxMessageBox(*(char **)(unaff_EBP + -0x10),0x30,0xf115);
  FUN_004abc24((CString *)(unaff_EBP + -0x10));
  CDataExchange::Fail(*(CDataExchange **)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b5201();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


