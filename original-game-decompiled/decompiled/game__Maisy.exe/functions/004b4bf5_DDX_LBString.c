
/* ==== DDX_LBString @ 004b4bf5 ==== 
 * signature: void __stdcall DDX_LBString(CDataExchange * param_1, int param_2, CString * param_3)
 * body: 004b4bf5-004b4c79
 * note: Library Function - Single Match  void __stdcall DDX_LBString(class CDataExchange *,int,class CString &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_LBString(class CDataExchange *,int,class CString &)
   
   Library: Visual Studio 1998 Release */

void DDX_LBString(CDataExchange *param_1,int param_2,CString *param_3)

{
  HWND__ *hWnd;
  WPARAM wParam;
  LRESULT LVar1;
  char *lParam;
  
  hWnd = CDataExchange::PrepareCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    SendMessageA(hWnd,0x18c,0xffffffff,*(LPARAM *)param_3);
  }
  else {
    wParam = SendMessageA(hWnd,0x188,0,0);
    if (wParam == 0xffffffff) {
      FUN_004abc24(param_3);
    }
    else {
      LVar1 = SendMessageA(hWnd,0x18a,wParam,0);
      lParam = CString::GetBufferSetLength(param_3,LVar1);
      SendMessageA(hWnd,0x189,wParam,(LPARAM)lParam);
    }
    CString::ReleaseBuffer(param_3,-1);
  }
  return;
}


