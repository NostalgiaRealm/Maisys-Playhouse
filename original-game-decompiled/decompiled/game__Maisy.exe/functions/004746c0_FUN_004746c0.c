
/* ==== FUN_004746c0 @ 004746c0 ==== 
 * signature: undefined4 __thiscall FUN_004746c0(void * this, int param_1, short * param_2)
 * body: 004746c0-00474745
 */

undefined4 __thiscall FUN_004746c0(void *this,int param_1,short *param_2)

{
  ushort uVar1;
  void *this_00;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 local_34;
  int local_32;
  
  if (param_1 != 0xd) {
    uVar3 = FUN_0046b650(this,param_1,param_2);
    return uVar3;
  }
  uVar1 = *param_2;
  uVar4 = (uint)uVar1;
  if (uVar1 == 0x1c) {
    this_00 = *(void **)(param_2 + 1);
    if ((this_00 != (void *)0x0) && ((*(byte *)((int)this_00 + 0x1e) & 0x80) != 0)) {
      sVar2 = FUN_00473650((int)this);
      local_32 = (int)sVar2;
      local_34 = 1;
      uVar3 = FUN_00474c50(this_00,this,&local_34);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  else if (uVar1 == 0x17) {
    sVar2 = FUN_00473650((int)this);
    uVar4 = (uint)sVar2;
    *param_2 = 1;
    *(uint *)(param_2 + 1) = uVar4;
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


