
/* ==== FailMinMaxWithFormat @ 004b4e9b ==== 
 * signature: void __stdcall FailMinMaxWithFormat(CDataExchange * param_1, long param_2, long param_3, char * param_4, uint param_5)
 * body: 004b4e9b-004b4f30
 * note: Library Function - Single Match  void __stdcall FailMinMaxWithFormat(class CDataExchange *,long,long,char const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall FailMinMaxWithFormat(class CDataExchange *,long,long,char const *,unsigned int)
   
   Library: Visual Studio 1998 Release */

void FailMinMaxWithFormat
               (CDataExchange *param_1,long param_2,long param_3,char *param_4,uint param_5)

{
  CDataExchange *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = *(CDataExchange **)(unaff_EBP + 8);
  if (*(int *)this != 0) {
    wsprintfA((LPSTR)(unaff_EBP + -0x30),*(LPCSTR *)(unaff_EBP + 0x14),
              *(undefined4 *)(unaff_EBP + 0xc));
    wsprintfA((LPSTR)(unaff_EBP + -0x50),*(LPCSTR *)(unaff_EBP + 0x14),
              *(undefined4 *)(unaff_EBP + 0x10));
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    AfxFormatString2((CString *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 0x18),
                     (char *)(unaff_EBP + -0x30),(char *)(unaff_EBP + -0x50));
    AfxMessageBox(*(char **)(unaff_EBP + -0x10),0x30,*(uint *)(unaff_EBP + 0x18));
    FUN_004abc24((CString *)(unaff_EBP + -0x10));
    CDataExchange::Fail(this);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b4f3b();
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


