
/* ==== _AfxPostInitDialog @ 004a87cb ==== 
 * signature: void __stdcall _AfxPostInitDialog(CWnd * param_1, tagRECT * param_2, ulong param_3)
 * body: 004a87cb-004a8845
 * note: Library Function - Single Match  void __stdcall _AfxPostInitDialog(class CWnd *,struct tagRECT const &,unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall _AfxPostInitDialog(class CWnd *,struct tagRECT const &,unsigned long)
   
   Library: Visual Studio 1998 Release */

void _AfxPostInitDialog(CWnd *param_1,tagRECT *param_2,ulong param_3)

{
  ulong uVar1;
  HWND pHVar2;
  CWnd *this;
  int iVar3;
  tagRECT local_14;
  
  if (((((param_3 & 0x10000000) == 0) &&
       (uVar1 = CWnd::GetExStyle(param_1), (uVar1 & 0x50000000) == 0)) &&
      (GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_14), param_2->left == local_14.left)) &&
     (param_2->top == local_14.top)) {
    pHVar2 = GetWindow(*(HWND *)(param_1 + 0x1c),4);
    this = CWnd::FromHandle(pHVar2);
    if ((this != (CWnd *)0x0) && (iVar3 = CWnd::IsWindowEnabled(this), iVar3 != 0)) {
      return;
    }
    iVar3 = (**(code **)(*(int *)param_1 + 0xb0))();
    if (iVar3 != 0) {
      FUN_004ab3d0(param_1,0);
    }
  }
  return;
}


