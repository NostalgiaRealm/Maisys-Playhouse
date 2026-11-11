
/* ==== FUN_0044f2e0 @ 0044f2e0 ==== 
 * signature: undefined4 __thiscall FUN_0044f2e0(void * this, int param_1)
 * body: 0044f2e0-0044f328
 */

undefined4 __thiscall FUN_0044f2e0(void *this,int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    iVar1 = FUN_0044e340((int)this);
    iVar2 = FUN_00430190(*(int *)((int)this + 0x30));
    iVar3 = 0;
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        if (*(int *)(iVar2 + 0x10) == param_1) {
          uVar4 = 1;
          break;
        }
        iVar2 = iVar2 + 0x1a;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    in_EAX = FUN_004301f0(*(int *)((int)this + 0x30));
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),uVar4);
}


