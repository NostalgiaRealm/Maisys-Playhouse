
/* ==== DDX_CBString @ 004b4ccd ==== 
 * signature: void __stdcall DDX_CBString(CDataExchange * param_1, int param_2, CString * param_3)
 * body: 004b4ccd-004b4d4f
 * note: Library Function - Single Match  void __stdcall DDX_CBString(class CDataExchange *,int,class CString &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_CBString(class CDataExchange *,int,class CString &)
   
   Library: Visual Studio 1998 Release */

void DDX_CBString(CDataExchange *param_1,int param_2,CString *param_3)

{
  HWND__ *hWnd;
  int iVar1;
  LPSTR lpString;
  LRESULT LVar2;
  int nMaxCount;
  
  hWnd = CDataExchange::PrepareCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    LVar2 = SendMessageA(hWnd,0x14d,0xffffffff,*(LPARAM *)param_3);
    if (LVar2 == -1) {
      AfxSetWindowText(hWnd,*(char **)param_3);
    }
  }
  else {
    iVar1 = GetWindowTextLengthA(hWnd);
    if (iVar1 == -1) {
      nMaxCount = 0x100;
      lpString = (LPSTR)FUN_004ac16a(param_3,0xff);
    }
    else {
      nMaxCount = iVar1 + 1;
      lpString = CString::GetBufferSetLength(param_3,iVar1);
    }
    GetWindowTextA(hWnd,lpString,nMaxCount);
    CString::ReleaseBuffer(param_3,-1);
  }
  return;
}


