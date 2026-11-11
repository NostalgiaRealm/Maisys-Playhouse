
/* ==== FUN_00405650 @ 00405650 ==== 
 * signature: undefined __thiscall FUN_00405650(void * this, uint param_1, int * param_2)
 * body: 00405650-00405782
 */

void __thiscall FUN_00405650(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint local_8;
  
  if (*(char *)((int)this + 0xa8) != '\0') {
    return;
  }
  iVar3 = 0;
  iVar1 = *(int *)((int)this + 0x9a);
  *(undefined1 *)((int)this + 0xa5) = 0;
  if (iVar1 != 0) {
    if (((param_1 & 0x80000000) == 0) || (iVar1 == 0)) {
      if (((param_1 & 0x40000000) == 0) || (iVar1 == 0)) {
        iVar3 = FUN_00459fc0(*(void **)((int)this + 0x2a),param_2);
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x66);
        if (iVar3 != 0) {
          if (*(int *)((int)this + 0x9e) == iVar3) {
            iVar3 = *(int *)(iVar3 + 0x66);
          }
          if (iVar3 != 0) goto LAB_00405740;
        }
        if ((param_1 & 0x4000000) != 0) {
          do {
            iVar3 = iVar1;
            iVar1 = *(int *)(iVar3 + 0x6a);
          } while (*(int *)(iVar3 + 0x6a) != 0);
          if (iVar3 == 0) {
            return;
          }
          if (*(int *)((int)this + 0x9e) == iVar3) {
            iVar3 = *(int *)(iVar3 + 0x66);
          }
        }
      }
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x6a);
      if (iVar3 != 0) {
        if (*(int *)((int)this + 0x9e) == iVar3) {
          iVar3 = *(int *)(iVar3 + 0x6a);
        }
        if (iVar3 != 0) goto LAB_00405740;
      }
      if (((param_1 & 0x4000000) != 0) && (iVar1 = FUN_0046cac0(iVar1), iVar1 != 0)) {
        piVar2 = (int *)FUN_0046cac0(*(int *)((int)this + 0x9a));
        iVar3 = FUN_00469fb0(piVar2);
        if (iVar3 == 0) {
          return;
        }
        if (*(int *)((int)this + 0x9e) == iVar3) {
          iVar3 = *(int *)(iVar3 + 0x6a);
        }
      }
    }
  }
  if (iVar3 == 0) {
    return;
  }
LAB_00405740:
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
  FUN_004058d0(this,iVar3,&local_8);
  return;
}


