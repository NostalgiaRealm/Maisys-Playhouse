
/* ==== CMDIChildWnd::OnWindowPosChanging @ 004b7366 ==== 
 * signature: void __thiscall OnWindowPosChanging(CMDIChildWnd * this, tagWINDOWPOS * param_1)
 * body: 004b7366-004b73e3
 * note: Library Function - Single Match  protected: void __thiscall CMDIChildWnd::OnWindowPosChanging(struct tagWINDOWPOS *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CMDIChildWnd::OnWindowPosChanging(struct tagWINDOWPOS *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMDIChildWnd::OnWindowPosChanging(CMDIChildWnd *this,tagWINDOWPOS *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong dwStyle;
  BOOL bMenu;
  tagRECT local_14;
  
  if ((DAT_004e51f8 != 0) && (((byte)param_1[0x18] & 1) == 0)) {
    iVar1 = FUN_004b72a4(this,&local_14);
    if (iVar1 != 0) {
      uVar2 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar2 & 0x1000000) != 0) {
        uVar2 = CWnd::GetExStyle((CWnd *)this);
        bMenu = 0;
        dwStyle = CWnd::GetExStyle((CWnd *)this);
        AdjustWindowRectEx(&local_14,dwStyle,bMenu,uVar2);
        *(LONG *)(param_1 + 8) = local_14.left;
        *(LONG *)(param_1 + 0xc) = local_14.top;
        *(LONG *)(param_1 + 0x10) = local_14.right - local_14.left;
        *(LONG *)(param_1 + 0x14) = local_14.bottom - local_14.top;
      }
    }
  }
  FUN_004a8882((int *)this);
  return;
}


