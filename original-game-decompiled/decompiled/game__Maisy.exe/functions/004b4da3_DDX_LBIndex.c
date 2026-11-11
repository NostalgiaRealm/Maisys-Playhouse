
/* ==== DDX_LBIndex @ 004b4da3 ==== 
 * signature: void __stdcall DDX_LBIndex(CDataExchange * param_1, int param_2, int * param_3)
 * body: 004b4da3-004b4de6
 * note: Library Function - Single Match  void __stdcall DDX_LBIndex(class CDataExchange *,int,int &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_LBIndex(class CDataExchange *,int,int &)
   
   Library: Visual Studio 1998 Release */

void DDX_LBIndex(CDataExchange *param_1,int param_2,int *param_3)

{
  HWND__ *hWnd;
  LRESULT LVar1;
  
  hWnd = CDataExchange::PrepareCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    SendMessageA(hWnd,0x186,*param_3,0);
  }
  else {
    LVar1 = SendMessageA(hWnd,0x188,0,0);
    *param_3 = LVar1;
  }
  return;
}


