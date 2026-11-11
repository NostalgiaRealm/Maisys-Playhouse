
/* ==== DDX_TextWithFormat @ 004b48a7 ==== 
 * signature: void __cdecl DDX_TextWithFormat(CDataExchange * param_1, int param_2, char * param_3, uint param_4, ...)
 * body: 004b48a7-004b4919
 * note: Library Function - Single Match  void __cdecl DDX_TextWithFormat(class CDataExchange *,int,char const *,unsigned int,...)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __cdecl DDX_TextWithFormat(class CDataExchange *,int,char const *,unsigned int,...)
   
   Library: Visual Studio 1998 Release */

void __cdecl DDX_TextWithFormat(CDataExchange *param_1,int param_2,char *param_3,uint param_4,...)

{
  HWND__ *hWnd;
  int iVar1;
  byte local_24 [32];
  
  hWnd = CDataExchange::PrepareEditCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    wvsprintfA((LPSTR)local_24,param_3,&stack0x00000014);
    AfxSetWindowText(hWnd,(char *)local_24);
  }
  else {
    GetWindowTextA(hWnd,(LPSTR)local_24,0x20);
    iVar1 = FUN_004b491a(local_24,(int)param_3,(undefined4 *)&stack0x00000014);
    if (iVar1 == 0) {
      AfxMessageBox(param_4,0,0xffffffff);
      CDataExchange::Fail(param_1);
    }
  }
  return;
}


