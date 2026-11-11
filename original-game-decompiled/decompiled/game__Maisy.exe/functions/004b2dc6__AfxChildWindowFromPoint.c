
/* ==== _AfxChildWindowFromPoint @ 004b2dc6 ==== 
 * signature: HWND__ * __stdcall _AfxChildWindowFromPoint(HWND__ * param_1, tagPOINT param_2)
 * body: 004b2dc6-004b2e49
 * note: Library Function - Single Match  struct HWND__ * __stdcall _AfxChildWindowFromPoint(struct HWND__ *,struct tagPOINT)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    struct HWND__ * __stdcall _AfxChildWindowFromPoint(struct HWND__ *,struct tagPOINT)
   
   Library: Visual Studio 1998 Release */

HWND__ * _AfxChildWindowFromPoint(HWND__ *param_1,tagPOINT param_2)

{
  POINT pt;
  HWND hWnd;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  tagRECT local_1c;
  LONG local_c;
  
  ClientToScreen(param_1,&param_2);
  hWnd = GetWindow(param_1,5);
  do {
    if (hWnd == (HWND)0x0) {
      return (HWND__ *)0x0;
    }
    iVar1 = GetDlgCtrlID(hWnd);
    if (((short)iVar1 != -1) && (uVar2 = GetWindowLongA(hWnd,-0x10), (uVar2 & 0x10000000) != 0)) {
      GetWindowRect(hWnd,&local_1c);
      local_c = param_2.x;
      pt.y = param_2.y;
      pt.x = param_2.x;
      BVar3 = PtInRect(&local_1c,pt);
      if (BVar3 != 0) {
        return hWnd;
      }
    }
    hWnd = GetWindow(hWnd,2);
  } while( true );
}


