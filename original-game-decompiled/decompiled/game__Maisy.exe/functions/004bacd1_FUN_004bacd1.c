
/* ==== FUN_004bacd1 @ 004bacd1 ==== 
 * signature: undefined __stdcall FUN_004bacd1(void)
 * body: 004bacd1-004bae1c
 */

void FUN_004bacd1(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cb2ec;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x14);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004bae1d();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004bae28();
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x18);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004bae30();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004bae3b();
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_004bae43();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004bae4e();
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x20);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_004bae56();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004bae61();
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x24);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_004bae69();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004bae74();
    FUN_004a602d(*(LPVOID *)(unaff_EBP + -0x10));
  }
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar1 + 0x74) != 0) {
    do {
      pvVar2 = CPtrList::RemoveHead((CPtrList *)(iVar1 + 0x68));
      FUN_004a602d(pvVar2);
    } while (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x74) != 0);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004bae7c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004bae87();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004bae92();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004baea7();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


