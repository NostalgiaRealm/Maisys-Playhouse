
/* ==== AfxRegisterClass @ 004a9767 ==== 
 * signature: int __stdcall AfxRegisterClass(tagWNDCLASSA * param_1)
 * body: 004a9767-004a9800
 * note: Library Function - Single Match  int __stdcall AfxRegisterClass(struct tagWNDCLASSA *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxRegisterClass(struct tagWNDCLASSA *)
   
   Library: Visual Studio 1998 Release */

int AfxRegisterClass(tagWNDCLASSA *param_1)

{
  WNDCLASSA *lpWndClass;
  ATOM AVar1;
  BOOL BVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  lpWndClass = *(WNDCLASSA **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb8;
  BVar2 = GetClassInfoA(lpWndClass->hInstance,lpWndClass->lpszClassName,
                        (LPWNDCLASSA)(unaff_EBP + -0x48));
  if (BVar2 == 0) {
    AVar1 = RegisterClassA(lpWndClass);
    if (AVar1 == 0) {
      iVar3 = 0;
      goto LAB_004a97ee;
    }
    iVar3 = FUN_004bafca();
    if (*(char *)(iVar3 + 0x14) != '\0') {
      AfxLockGlobals(1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_004bafca();
      lstrcatA((LPSTR)(iVar3 + 0x34),lpWndClass->lpszClassName);
      *(undefined1 *)(unaff_EBP + -0x12) = 10;
      *(undefined1 *)(unaff_EBP + -0x11) = 0;
      lstrcatA((LPSTR)(iVar3 + 0x34),(LPCSTR)(unaff_EBP + -0x12));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      AfxUnlockGlobals(1);
    }
  }
  iVar3 = 1;
LAB_004a97ee:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar3;
}


