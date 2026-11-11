
/* ==== _AFX_THREAD_STATE::~_AFX_THREAD_STATE @ 004ba8b0 ==== 
 * signature: void __thiscall ~_AFX_THREAD_STATE(_AFX_THREAD_STATE * this)
 * body: 004ba8b0-004ba93a
 * note: Library Function - Single Match  public: virtual __thiscall _AFX_THREAD_STATE::~_AFX_THREAD_STATE(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall _AFX_THREAD_STATE::~_AFX_THREAD_STATE(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall _AFX_THREAD_STATE::~_AFX_THREAD_STATE(_AFX_THREAD_STATE *this)

{
  int *piVar1;
  HHOOK pHVar2;
  LPVOID pvVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR__scalar_deleting_destructor__004cb2d4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = (int *)extraout_ECX[0x34];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x5c))();
    piVar1 = (int *)extraout_ECX[0x34];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  pHVar2 = *(HHOOK *)(*(int *)(unaff_EBP + -0x10) + 0x34);
  if (pHVar2 != (HHOOK)0x0) {
    UnhookWindowsHookEx(pHVar2);
  }
  pHVar2 = *(HHOOK *)(*(int *)(unaff_EBP + -0x10) + 0x30);
  if (pHVar2 != (HHOOK)0x0) {
    UnhookWindowsHookEx(pHVar2);
  }
  pvVar3 = *(LPVOID *)(*(int *)(unaff_EBP + -0x10) + 0xc);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_0048e750(pvVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004ba945();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


