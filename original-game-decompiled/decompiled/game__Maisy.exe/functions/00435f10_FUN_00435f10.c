
/* ==== FUN_00435f10 @ 00435f10 ==== 
 * signature: uint __thiscall FUN_00435f10(void * this, int * param_1)
 * body: 00435f10-00435fb8
 */

uint __thiscall FUN_00435f10(void *this,int *param_1)

{
  bool bVar1;
  void *in_EAX;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_8;
  
  local_10 = 0;
  if (0 < *(int *)((int)this + 0x7236)) {
    iVar3 = (int)this + 0x26;
    do {
      iVar4 = 0;
      local_8 = 0;
      if (0 < *(int *)(iVar3 + 0x112)) {
        do {
          iVar2 = *(int *)(iVar3 + 0x116) + iVar4;
          bVar1 = FUN_00437430((int *)(iVar2 + 0x14),param_1);
          if ((CONCAT31(extraout_var,bVar1) != 0) &&
             (*(short *)((int)param_1 + 0x12) <= *(short *)(iVar2 + 0x46))) {
            *(undefined2 *)((int)param_1 + 0x4a) = (undefined2)local_8;
            *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(iVar3 + 4);
            return CONCAT31((int3)(CONCAT22((short)((uint3)extraout_var >> 8),(undefined2)local_8)
                                  >> 8),1);
          }
          iVar4 = iVar4 + 0x80;
          local_8 = local_8 + 1;
        } while (local_8 < *(int *)(iVar3 + 0x112));
      }
      iVar3 = iVar3 + 0x124;
      local_10 = local_10 + 1;
      in_EAX = this;
    } while (local_10 < *(int *)((int)this + 0x7236));
  }
  return (uint)in_EAX & 0xffffff00;
}


