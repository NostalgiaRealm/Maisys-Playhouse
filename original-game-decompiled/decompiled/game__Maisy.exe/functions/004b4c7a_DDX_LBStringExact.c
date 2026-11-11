
/* ==== DDX_LBStringExact @ 004b4c7a ==== 
 * signature: void __stdcall DDX_LBStringExact(CDataExchange * param_1, int param_2, CString * param_3)
 * body: 004b4c7a-004b4ccc
 * note: Library Function - Single Match  void __stdcall DDX_LBStringExact(class CDataExchange *,int,class CString &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_LBStringExact(class CDataExchange *,int,class CString &)
   
   Library: Visual Studio 1998 Release */

void DDX_LBStringExact(CDataExchange *param_1,int param_2,CString *param_3)

{
  HWND__ *hWnd;
  WPARAM wParam;
  
  hWnd = CDataExchange::PrepareCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    wParam = SendMessageA(hWnd,0x1a2,0xffffffff,*(LPARAM *)param_3);
    if (-1 < (int)wParam) {
      SendMessageA(hWnd,0x186,wParam,0);
    }
  }
  else {
    DDX_LBString(param_1,param_2,param_3);
  }
  return;
}


