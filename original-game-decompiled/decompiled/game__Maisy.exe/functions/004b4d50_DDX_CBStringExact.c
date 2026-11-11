
/* ==== DDX_CBStringExact @ 004b4d50 ==== 
 * signature: void __stdcall DDX_CBStringExact(CDataExchange * param_1, int param_2, CString * param_3)
 * body: 004b4d50-004b4da2
 * note: Library Function - Single Match  void __stdcall DDX_CBStringExact(class CDataExchange *,int,class CString &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_CBStringExact(class CDataExchange *,int,class CString &)
   
   Library: Visual Studio 1998 Release */

void DDX_CBStringExact(CDataExchange *param_1,int param_2,CString *param_3)

{
  HWND__ *hWnd;
  WPARAM wParam;
  
  hWnd = CDataExchange::PrepareCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    wParam = SendMessageA(hWnd,0x158,0xffffffff,*(LPARAM *)param_3);
    if (-1 < (int)wParam) {
      SendMessageA(hWnd,0x14e,wParam,0);
    }
  }
  else {
    DDX_CBString(param_1,param_2,param_3);
  }
  return;
}


