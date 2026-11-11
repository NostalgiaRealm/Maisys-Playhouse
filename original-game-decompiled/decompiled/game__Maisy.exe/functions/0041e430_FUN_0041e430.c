
/* ==== FUN_0041e430 @ 0041e430 ==== 
 * signature: uint __thiscall FUN_0041e430(void * this, int param_1, short * param_2, undefined4 param_3, int param_4)
 * body: 0041e430-0041e529
 */

uint __thiscall FUN_0041e430(void *this,int param_1,short *param_2,undefined4 param_3,int param_4)

{
  ushort uVar3;
  int iVar1;
  uint uVar2;
  short sVar4;
  short sVar5;
  short local_20;
  short sStack_1e;
  short local_1c;
  short sStack_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  short sStack_a;
  undefined1 local_5;
  
  local_5 = 1;
  local_18 = *(undefined4 *)((int)this + 0xb8);
  local_14 = *(undefined4 *)((int)this + 0xbc);
  (**(code **)(*(int *)this + 0x114))();
  FUN_0043bff0((short *)&local_18,(short *)((int)this + 0xb8),param_2);
  sVar5 = -(short)local_18;
  uVar3 = (ushort)((uint)local_18 >> 0x10);
  iVar1 = (uint)uVar3 << 0x10;
  sVar4 = -uVar3;
  local_c = (short)local_14;
  local_c = local_c + sVar5;
  sStack_a = (short)((uint)local_14 >> 0x10);
  local_10 = 0;
  sStack_a = sStack_a + sVar4;
  if ((-1 < (short)param_1) && ((short)param_1 < local_c)) {
    iVar1 = CONCAT22(uVar3,param_1._2_2_);
    if ((-1 < param_1) && (param_1._2_2_ < sStack_a)) {
      if (param_4 != 0) {
        local_20 = (short)*(undefined4 *)param_2;
        sStack_1e = (short)((uint)*(undefined4 *)param_2 >> 0x10);
        local_1c = (short)*(undefined4 *)(param_2 + 2);
        sStack_1a = (short)((uint)*(undefined4 *)(param_2 + 2) >> 0x10);
        _local_20 = CONCAT22(sStack_1e + sVar4,local_20 + sVar5);
        _local_1c = CONCAT22(sStack_1a + sVar4,local_1c + sVar5);
        iVar1 = (**(code **)(*(int *)this + 0x22c))
                          ((int)this + 0x114,param_3,&local_20,&local_10,param_4);
        if ((char)iVar1 != '\0') {
          uVar2 = FUN_0041e3e0(this,(int)this + 0x114,(int)(short)param_1,(int)param_1._2_2_);
          return uVar2;
        }
      }
      goto LAB_0041e51e;
    }
  }
  local_5 = 0;
LAB_0041e51e:
  return CONCAT31((int3)((uint)iVar1 >> 8),local_5);
}


