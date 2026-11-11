
/* ==== DDX_Text @ 004b4ab3 ==== 
 * signature: void __stdcall DDX_Text(CDataExchange * param_1, int param_2, CString * param_3)
 * body: 004b4ab3-004b4b04
 * note: Library Function - Single Match  void __stdcall DDX_Text(class CDataExchange *,int,class CString &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_Text(class CDataExchange *,int,class CString &)
   
   Library: Visual Studio 1998 Release */

void DDX_Text(CDataExchange *param_1,int param_2,CString *param_3)

{
  HWND__ *hWnd;
  int iVar1;
  char *lpString;
  int nMaxCount;
  
  hWnd = CDataExchange::PrepareEditCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    AfxSetWindowText(hWnd,*(char **)param_3);
  }
  else {
    iVar1 = GetWindowTextLengthA(hWnd);
    nMaxCount = iVar1 + 1;
    lpString = CString::GetBufferSetLength(param_3,iVar1);
    GetWindowTextA(hWnd,lpString,nMaxCount);
    CString::ReleaseBuffer(param_3,-1);
  }
  return;
}


