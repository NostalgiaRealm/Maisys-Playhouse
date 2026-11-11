
/* ==== CWnd::RepositionBars @ 004aa939 ==== 
 * signature: void __thiscall RepositionBars(CWnd * this, uint param_1, uint param_2, uint param_3, uint param_4, tagRECT * param_5, tagRECT * param_6, int param_7)
 * body: 004aa939-004aaa7c
 * note: Library Function - Single Match  public: void __thiscall CWnd::RepositionBars(unsigned int,unsigned int,unsigned int,unsigned int,struct tagRECT *,struct tagRECT const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::RepositionBars(unsigned int,unsigned int,unsigned int,unsigned
   int,struct tagRECT *,struct tagRECT const *,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CWnd::RepositionBars
          (CWnd *this,uint param_1,uint param_2,uint param_3,uint param_4,tagRECT *param_5,
          tagRECT *param_6,int param_7)

{
  HWND__ *pHVar1;
  HWND hWnd;
  uint uVar2;
  void *pvVar3;
  CWnd *pCVar4;
  HWND__ *pHVar5;
  HDWP local_28;
  tagRECT local_24;
  LONG local_14;
  LONG local_10;
  int local_c;
  CWnd *local_8;
  
  local_c = param_7;
  local_10 = 0;
  local_14 = 0;
  local_8 = this;
  if (param_6 == (tagRECT *)0x0) {
    GetClientRect(*(HWND *)(this + 0x1c),&local_24);
  }
  else {
    local_24.left = param_6->left;
    local_24.top = param_6->top;
    local_24.right = param_6->right;
    local_24.bottom = param_6->bottom;
  }
  if (param_4 == 1) {
    local_28 = (HDWP)0x0;
  }
  else {
    local_28 = BeginDeferWindowPos(8);
  }
  hWnd = GetTopWindow(*(HWND *)(local_8 + 0x1c));
  pHVar1 = (HWND__ *)0x0;
  while (hWnd != (HWND)0x0) {
    uVar2 = GetDlgCtrlID(hWnd);
    uVar2 = uVar2 & 0xffff;
    pvVar3 = FUN_004a8970(hWnd);
    pHVar5 = hWnd;
    if ((((uVar2 != param_3) && (pHVar5 = pHVar1, param_1 <= uVar2)) && (uVar2 <= param_2)) &&
       (pvVar3 != (void *)0x0)) {
      SendMessageA(hWnd,0x361,0,(LPARAM)&local_28);
    }
    hWnd = GetWindow(hWnd,2);
    pHVar1 = pHVar5;
  }
  if (param_4 == 1) {
    if (param_7 == 0) {
      param_5->top = 0;
      param_5->left = 0;
      param_5->right = local_14;
      param_5->bottom = local_10;
    }
    else {
      CopyRect(param_5,&local_24);
    }
  }
  else {
    if ((param_3 != 0) && (pHVar1 != (HWND__ *)0x0)) {
      pCVar4 = FromHandle(pHVar1);
      if (param_4 == 2) {
        local_24.left = local_24.left + param_5->left;
        local_24.top = local_24.top + param_5->top;
        local_24.right = local_24.right - param_5->right;
        local_24.bottom = local_24.bottom - param_5->bottom;
      }
      (**(code **)(*(int *)pCVar4 + 100))(&local_24,0);
      AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)&local_28,pHVar1,&local_24);
    }
    if (local_28 != (HDWP)0x0) {
      EndDeferWindowPos(local_28);
    }
  }
  return;
}


