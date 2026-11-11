
/* ==== FUN_00474c50 @ 00474c50 ==== 
 * signature: undefined4 __thiscall FUN_00474c50(void * this, undefined4 param_1, undefined4 param_2)
 * body: 00474c50-00474cc4
 */

undefined4 __thiscall FUN_00474c50(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  short *psVar3;
  short local_6;
  
  if ((*(int *)((int)this + 0x2a) != 0) && (*(int *)((int)this + 4) != 0)) {
    iVar1 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar1 != 0) {
      local_6 = *(short *)((int)this + 0x36);
      psVar3 = &local_6;
      iVar1 = *(int *)((int)this + 0x2a);
      this_00 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      uVar2 = FUN_00450c40(this_00,iVar1,psVar3,param_1,param_2);
      *(short *)((int)this + 0x36) = local_6;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  uVar2 = (**(code **)(*(int *)this + 600))(0x259,param_2,0x2e);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


