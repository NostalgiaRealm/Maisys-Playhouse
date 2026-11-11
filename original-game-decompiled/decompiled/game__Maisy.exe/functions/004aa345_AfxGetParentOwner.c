
/* ==== AfxGetParentOwner @ 004aa345 ==== 
 * signature: HWND__ * __stdcall AfxGetParentOwner(HWND__ * param_1)
 * body: 004aa345-004aa39f
 * note: Library Function - Single Match  struct HWND__ * __stdcall AfxGetParentOwner(struct HWND__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    struct HWND__ * __stdcall AfxGetParentOwner(struct HWND__ *)
   
   Library: Visual Studio 1998 Release */

HWND__ * AfxGetParentOwner(HWND__ *param_1)

{
  void *pvVar1;
  CWnd *pCVar2;
  HWND__ *pHVar3;
  uint uVar4;
  
  pvVar1 = FUN_004a8970(param_1);
  if (pvVar1 == (void *)0x0) {
    uVar4 = GetWindowLongA(param_1,-0x10);
    if ((uVar4 & 0x40000000) == 0) {
      pHVar3 = GetWindow(param_1,4);
    }
    else {
      pHVar3 = GetParent(param_1);
    }
  }
  else {
    pHVar3 = *(HWND__ **)((int)pvVar1 + 0x20);
    if (pHVar3 == (HWND__ *)0x0) {
      pHVar3 = GetParent(*(HWND *)((int)pvVar1 + 0x1c));
    }
    pCVar2 = CWnd::FromHandle(pHVar3);
    if (pCVar2 == (CWnd *)0x0) {
      pHVar3 = (HWND__ *)0x0;
    }
    else {
      pHVar3 = *(HWND__ **)(pCVar2 + 0x1c);
    }
  }
  return pHVar3;
}


