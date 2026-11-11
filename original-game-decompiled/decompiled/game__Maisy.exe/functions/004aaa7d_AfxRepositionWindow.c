
/* ==== AfxRepositionWindow @ 004aaa7d ==== 
 * signature: void __stdcall AfxRepositionWindow(AFX_SIZEPARENTPARAMS * param_1, HWND__ * param_2, tagRECT * param_3)
 * body: 004aaa7d-004aab1f
 * note: Library Function - Single Match  void __stdcall AfxRepositionWindow(struct AFX_SIZEPARENTPARAMS *,struct HWND__ *,struct tagRECT const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxRepositionWindow(struct AFX_SIZEPARENTPARAMS *,struct HWND__ *,struct tagRECT
   const *)
   
   Library: Visual Studio 1998 Release */

void AfxRepositionWindow(AFX_SIZEPARENTPARAMS *param_1,HWND__ *param_2,tagRECT *param_3)

{
  HWND hWnd;
  BOOL BVar1;
  HDWP pvVar2;
  undefined1 local_14 [16];
  
  hWnd = GetParent(param_2);
  if ((param_1 == (AFX_SIZEPARENTPARAMS *)0x0) || (*(int *)param_1 != 0)) {
    GetWindowRect(param_2,(LPRECT)local_14);
    ScreenToClient(hWnd,(LPPOINT)local_14);
    ScreenToClient(hWnd,(LPPOINT)(local_14 + 8));
    BVar1 = EqualRect((RECT *)local_14,param_3);
    if (BVar1 == 0) {
      if (param_1 == (AFX_SIZEPARENTPARAMS *)0x0) {
        SetWindowPos(param_2,(HWND)0x0,param_3->left,param_3->top,param_3->right - param_3->left,
                     param_3->bottom - param_3->top,0x14);
      }
      else {
        pvVar2 = DeferWindowPos(*(HDWP *)param_1,param_2,(HWND)0x0,param_3->left,param_3->top,
                                param_3->right - param_3->left,param_3->bottom - param_3->top,0x14);
        *(HDWP *)param_1 = pvVar2;
      }
    }
  }
  return;
}


