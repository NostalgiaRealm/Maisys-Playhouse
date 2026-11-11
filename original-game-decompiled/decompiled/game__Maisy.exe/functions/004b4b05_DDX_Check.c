
/* ==== DDX_Check @ 004b4b05 ==== 
 * signature: void __stdcall DDX_Check(CDataExchange * param_1, int param_2, int * param_3)
 * body: 004b4b05-004b4b59
 * note: Library Function - Single Match  void __stdcall DDX_Check(class CDataExchange *,int,int &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_Check(class CDataExchange *,int,int &)
   
   Library: Visual Studio 1998 Release */

void DDX_Check(CDataExchange *param_1,int param_2,int *param_3)

{
  HWND__ *hWnd;
  LRESULT LVar1;
  
  hWnd = CDataExchange::PrepareCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    if ((*param_3 < 0) || (2 < *param_3)) {
      *param_3 = 0;
    }
    SendMessageA(hWnd,0xf1,*param_3,0);
  }
  else {
    LVar1 = SendMessageA(hWnd,0xf0,0,0);
    *param_3 = LVar1;
  }
  return;
}


