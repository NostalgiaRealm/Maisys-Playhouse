
/* ==== FUN_004b41f9 @ 004b41f9 ==== 
 * signature: undefined __stdcall FUN_004b41f9(void)
 * body: 004b41f9-004b42bf
 */

void FUN_004b41f9(void)

{
  int *piVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  void *this;
  uint uVar5;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  uVar5 = (int)*(uint *)(unaff_EBP + 0xc) >> 0x1f;
  iVar4 = (*(uint *)(unaff_EBP + 0xc) ^ uVar5) - uVar5;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (0 < iVar4) {
    piVar1 = (int *)((int)this + 0x24);
    do {
      if (*(uint *)((int)this + 0x28) < *piVar1 + 1U) {
        FUN_004b4055(this,(*piVar1 - *(int *)((int)this + 0x28)) + 1);
      }
      cVar2 = *(char *)*piVar1;
      *(char *)(unaff_EBP + -0x11) = cVar2;
      *piVar1 = *piVar1 + 1;
      if ((cVar2 == '\n') || (cVar2 == '\r')) {
        if (*(char *)(unaff_EBP + -0x11) == '\r') {
          if (*(uint *)((int)this + 0x28) < *piVar1 + 1U) {
            FUN_004b4055(this,(*piVar1 - *(uint *)((int)this + 0x28)) + 1);
          }
          puVar3 = (undefined1 *)*piVar1;
          *(undefined1 *)(unaff_EBP + -0x11) = *puVar3;
          *piVar1 = (int)(puVar3 + 1);
        }
        if (*(int *)(unaff_EBP + 0xc) != iVar4) {
          *(undefined1 *)(*(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x18)) =
               *(undefined1 *)(unaff_EBP + -0x11);
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        }
        break;
      }
      *(char *)(*(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x18)) = cVar2;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x18) < iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined1 *)(*(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x18)) = 0;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


