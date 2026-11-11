
/* ==== CMDIFrameWnd::GetWindowMenuPopup @ 004b755b ==== 
 * signature: HMENU__ * __thiscall GetWindowMenuPopup(CMDIFrameWnd * this, HMENU__ * param_1)
 * body: 004b755b-004b75cb
 * note: Library Function - Single Match  public: virtual struct HMENU__ * __thiscall CMDIFrameWnd::GetWindowMenuPopup(struct HMENU__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual struct HMENU__ * __thiscall CMDIFrameWnd::GetWindowMenuPopup(struct HMENU__ *)
   
   Library: Visual Studio 1998 Release */

HMENU__ * __thiscall CMDIFrameWnd::GetWindowMenuPopup(CMDIFrameWnd *this,HMENU__ *param_1)

{
  int nPos;
  HMENU hMenu;
  int iVar1;
  UINT UVar2;
  int nPos_00;
  
  if (param_1 != (HMENU__ *)0x0) {
    nPos = GetMenuItemCount(param_1);
    while (nPos != 0) {
      nPos = nPos + -1;
      hMenu = GetSubMenu(param_1,nPos);
      if (hMenu != (HMENU)0x0) {
        nPos_00 = 0;
        iVar1 = GetMenuItemCount(hMenu);
        if (0 < iVar1) {
          do {
            UVar2 = GetMenuItemID(hMenu,nPos_00);
            if ((0xe12f < UVar2) && (UVar2 < 0xe140)) {
              return hMenu;
            }
            nPos_00 = nPos_00 + 1;
          } while (nPos_00 < iVar1);
        }
      }
    }
  }
  return (HMENU__ *)0x0;
}


