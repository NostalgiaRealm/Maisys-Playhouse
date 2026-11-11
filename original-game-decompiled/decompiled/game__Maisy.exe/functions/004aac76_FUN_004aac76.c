
/* ==== FUN_004aac76 @ 004aac76 ==== 
 * signature: undefined4 __stdcall FUN_004aac76(void)
 * body: 004aac76-004aad24;004aad37-004aad58
 */

undefined4 FUN_004aac76(void)

{
  HWND hWnd;
  CMapPtrToPtr *this;
  undefined4 uVar1;
  HWND pHVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CMapPtrToPtr *)FID_conflict_afxMapHGDIOBJ();
  if (this == (CMapPtrToPtr *)0x0) {
    uVar1 = 0;
  }
  else {
    hWnd = *(HWND *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    CMapPtrToPtr::Lookup(this,hWnd,(void **)(unaff_EBP + -0x10));
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      pHVar2 = GetParent(hWnd);
      iVar3 = CMapPtrToPtr::Lookup(this,pHVar2,(void **)(unaff_EBP + -0x14));
      if (((iVar3 != 0) && (*(int *)(unaff_EBP + -0x14) != 0)) &&
         (iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x34), iVar3 != 0)) {
        iVar3 = CMapPtrToPtr::Lookup
                          ((CMapPtrToPtr *)(iVar3 + 0x20),hWnd,(void **)(unaff_EBP + -0x1c));
        if (iVar3 != 0) {
          FUN_004a85cb();
          *(undefined4 *)(unaff_EBP + -4) = 0;
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x1c);
          uVar1 = FUN_004aac53((void *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + 0xc));
          *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
          *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004aad2f();
          uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
          goto LAB_004aad46;
        }
      }
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_004aac53(*(void **)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc));
    }
  }
LAB_004aad46:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


