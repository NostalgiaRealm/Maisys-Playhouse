
/* ==== DDX_Scroll @ 004b4e2b ==== 
 * signature: void __stdcall DDX_Scroll(CDataExchange * param_1, int param_2, int * param_3)
 * body: 004b4e2b-004b4e65
 * note: Library Function - Single Match  void __stdcall DDX_Scroll(class CDataExchange *,int,int &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall DDX_Scroll(class CDataExchange *,int,int &)
   
   Library: Visual Studio 1998 Release */

void DDX_Scroll(CDataExchange *param_1,int param_2,int *param_3)

{
  HWND__ *hWnd;
  int iVar1;
  
  hWnd = CDataExchange::PrepareCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    SetScrollPos(hWnd,2,*param_3,1);
  }
  else {
    iVar1 = GetScrollPos(hWnd,2);
    *param_3 = iVar1;
  }
  return;
}


