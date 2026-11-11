
/* ==== FUN_00403790 @ 00403790 ==== 
 * signature: undefined4 __thiscall FUN_00403790(void * this, int * param_1, char param_2)
 * body: 00403790-00403814
 */

undefined4 __thiscall FUN_00403790(void *this,int *param_1,char param_2)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if ((*(int **)((int)this + 0x9a) == param_1) || (*(int **)((int)this + 0x9e) == param_1)) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if (param_2 != '\0') {
    uVar1 = FUN_0046c960(param_1);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  iVar5 = *(int *)(*(int *)((int)this + 0x32) + 0x26);
  iVar2 = FUN_00430190(*(int *)((int)this + 0x32));
  iVar5 = iVar5 + -1;
  if (-1 < iVar5) {
    piVar4 = (int *)(iVar2 + iVar5 * 10);
    do {
      if (((int *)*piVar4 == param_1) && ((char)piVar4[2] != '\0')) {
        uVar1 = FUN_004301f0(*(int *)((int)this + 0x32));
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      piVar4 = (int *)((int)piVar4 + -10);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  uVar3 = FUN_004301f0(*(int *)((int)this + 0x32));
  return uVar3 & 0xffffff00;
}


