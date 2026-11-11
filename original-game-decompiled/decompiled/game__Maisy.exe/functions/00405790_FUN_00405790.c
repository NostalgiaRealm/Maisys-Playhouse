
/* ==== FUN_00405790 @ 00405790 ==== 
 * signature: undefined __thiscall FUN_00405790(void * this, uint param_1, int * param_2, undefined4 param_3, int param_4)
 * body: 00405790-004058cc
 */

void __thiscall FUN_00405790(void *this,uint param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint local_8;
  
  if (*(char *)((int)this + 0xa8) != '\0') {
    return;
  }
  if (param_4 == 0) {
    if (((param_1 & 0x80000000) == 0) || (iVar1 = *(int *)((int)this + 0x9a), iVar1 == 0)) {
      if (((param_1 & 0x40000000) == 0) || (iVar1 = *(int *)((int)this + 0x9a), iVar1 == 0)) {
        param_4 = FUN_00459fc0(*(void **)((int)this + 0x2a),param_2);
      }
      else {
        param_4 = *(int *)(iVar1 + 0x66);
        if (param_4 != 0) {
          if (*(int *)((int)this + 0x9e) == param_4) {
            param_4 = *(int *)(param_4 + 0x66);
          }
          if (param_4 != 0) goto LAB_00405874;
        }
        if ((param_1 & 0x4000000) != 0) {
          do {
            param_4 = iVar1;
            iVar1 = *(int *)(param_4 + 0x6a);
          } while (*(int *)(param_4 + 0x6a) != 0);
          if ((param_4 != 0) && (*(int *)((int)this + 0x9e) == param_4)) {
            param_4 = *(int *)(param_4 + 0x66);
          }
        }
      }
    }
    else {
      param_4 = *(int *)(iVar1 + 0x6a);
      if (param_4 != 0) {
        if (*(int *)((int)this + 0x9e) == param_4) {
          param_4 = *(int *)(param_4 + 0x6a);
        }
        if (param_4 != 0) goto LAB_00405874;
      }
      if (((param_1 & 0x4000000) != 0) && (iVar1 = FUN_0046cac0(iVar1), iVar1 != 0)) {
        piVar2 = (int *)FUN_0046cac0(*(int *)((int)this + 0x9a));
        param_4 = FUN_00469fb0(piVar2);
        if ((param_4 != 0) && (*(int *)((int)this + 0x9e) == param_4)) {
          param_4 = *(int *)(param_4 + 0x6a);
        }
      }
    }
  }
LAB_00405874:
  FUN_00408490(this,1);
  if (param_4 != 0) {
    local_8 = 0;
    if ((param_1 & 0x10000000) != 0) {
      local_8 = 2;
    }
    if ((param_1 & 0x8000000) != 0) {
      local_8 = local_8 | 1;
    }
    if ((param_1 & 0x4000000) != 0) {
      local_8 = local_8 | 4;
    }
    FUN_004058d0(this,param_4,&local_8);
  }
  FUN_00408490(this,0);
  return;
}


