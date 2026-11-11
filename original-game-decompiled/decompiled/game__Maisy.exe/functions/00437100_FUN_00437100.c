
/* ==== FUN_00437100 @ 00437100 ==== 
 * signature: uint __thiscall FUN_00437100(void * this, int param_1, int * param_2)
 * body: 00437100-004371ad
 */

uint __thiscall FUN_00437100(void *this,int param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x7236)) {
    piVar4 = (int *)((int)this + 0x138);
    do {
      uVar3 = 0;
      if (0 < *piVar4) {
        iVar2 = 0;
        do {
          bVar1 = FUN_00437430((int *)(piVar4[1] + iVar2 + 0x14),param_2);
          if (CONCAT31(extraout_var,bVar1) != 0) {
            if (param_1 != -1) {
              return (int)*(short *)(*(int *)((int)this + local_8 * 0x124 + 0x13c) + 0x4e +
                                    uVar3 * 0x80);
            }
            return local_8 << 8 | uVar3;
          }
          iVar2 = iVar2 + 0x80;
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < *piVar4);
      }
      piVar4 = piVar4 + 0x49;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)this + 0x7236));
  }
  return 0xffffffff;
}


