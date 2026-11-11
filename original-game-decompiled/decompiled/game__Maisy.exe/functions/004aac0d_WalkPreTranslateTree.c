
/* ==== CWnd::WalkPreTranslateTree @ 004aac0d ==== 
 * signature: int __stdcall WalkPreTranslateTree(HWND__ * param_1, tagMSG * param_2)
 * body: 004aac0d-004aac52
 * note: Library Function - Single Match  public: static int __stdcall CWnd::WalkPreTranslateTree(struct HWND__ *,struct tagMSG *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static int __stdcall CWnd::WalkPreTranslateTree(struct HWND__ *,struct tagMSG *)
   
   Library: Visual Studio 1998 Release */

int CWnd::WalkPreTranslateTree(HWND__ *param_1,tagMSG *param_2)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  
  hWnd = param_2->hwnd;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    piVar1 = FUN_004a8970(hWnd);
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x94))(param_2), iVar2 != 0))
    break;
    if (hWnd == param_1) {
      return 0;
    }
    hWnd = GetParent(hWnd);
  }
  return 1;
}


