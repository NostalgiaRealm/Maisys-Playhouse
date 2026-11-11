
/* ==== _AfxPreInitDialog @ 004a87a8 ==== 
 * signature: void __stdcall _AfxPreInitDialog(CWnd * param_1, tagRECT * param_2, ulong * param_3)
 * body: 004a87a8-004a87ca
 * note: Library Function - Single Match  void __stdcall _AfxPreInitDialog(class CWnd *,struct tagRECT *,unsigned long *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall _AfxPreInitDialog(class CWnd *,struct tagRECT *,unsigned long *)
   
   Library: Visual Studio 1998 Release */

void _AfxPreInitDialog(CWnd *param_1,tagRECT *param_2,ulong *param_3)

{
  ulong uVar1;
  
  GetWindowRect(*(HWND *)(param_1 + 0x1c),param_2);
  uVar1 = CWnd::GetExStyle(param_1);
  *param_3 = uVar1;
  return;
}


