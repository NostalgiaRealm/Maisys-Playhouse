
/* ==== CWnd::SendMessageToDescendants @ 004aa616 ==== 
 * signature: void __stdcall SendMessageToDescendants(HWND__ * param_1, uint param_2, uint param_3, long param_4, int param_5, int param_6)
 * body: 004aa616-004aa694
 * note: Library Function - Single Match  public: static void __stdcall CWnd::SendMessageToDescendants(struct HWND__ *,unsigned int,unsigned int,long,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void __stdcall CWnd::SendMessageToDescendants(struct HWND__ *,unsigned
   int,unsigned int,long,int,int)
   
   Library: Visual Studio 1998 Release */

void CWnd::SendMessageToDescendants
               (HWND__ *param_1,uint param_2,uint param_3,long param_4,int param_5,int param_6)

{
  HWND hWnd;
  void *pvVar1;
  HWND pHVar2;
  
  for (hWnd = GetTopWindow(param_1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    if (param_6 == 0) {
      SendMessageA(hWnd,param_2,param_3,param_4);
    }
    else {
      pvVar1 = FUN_004a8970(hWnd);
      if (pvVar1 != (void *)0x0) {
        FUN_004a86b6();
      }
    }
    if ((param_5 != 0) && (pHVar2 = GetTopWindow(hWnd), pHVar2 != (HWND)0x0)) {
      SendMessageToDescendants(hWnd,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}


