
/* ==== FUN_00421fb0 @ 00421fb0 ==== 
 * signature: uint __thiscall FUN_00421fb0(void * this, int param_1, short * param_2, int param_3, int param_4)
 * body: 00421fb0-0042217e
 */

uint __thiscall FUN_00421fb0(void *this,int param_1,short *param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short local_20;
  short sStack_1e;
  short local_1c;
  short sStack_1a;
  int local_18;
  short local_14;
  short sStack_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 1;
  (**(code **)(*(int *)this + 0x114))();
  if (*(int *)((int)this + 0x152) == 0) {
    local_c = *(undefined4 *)((int)this + 0xbc);
    local_10 = *(undefined4 *)((int)this + 0xb8);
  }
  else {
    iVar3 = *(int *)((int)this + 0x152) + param_3 * 0x3a;
    local_10 = *(undefined4 *)(iVar3 + 4);
    local_c = *(undefined4 *)(iVar3 + 8);
  }
  FUN_0043bff0((short *)&local_10,(short *)((int)this + 0xb8),param_2);
  iVar3 = -(int)local_10._2_2_;
  sStack_12 = (short)((uint)local_c >> 0x10);
  sStack_12 = sStack_12 + (short)iVar3;
  local_14 = (short)local_c;
  uVar2 = local_10._2_2_ + (short)iVar3;
  local_18 = (uint)uVar2 << 0x10;
  local_14 = local_14 - (short)local_10;
  if ((-1 < (short)param_1) && ((short)param_1 < local_14)) {
    iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),param_1._2_2_);
    if (((short)uVar2 <= param_1._2_2_) && (param_1._2_2_ < sStack_12)) {
      if (param_4 != 0) {
        if (*(int *)((int)this + 0x194) == 0) {
          uVar4 = FUN_00434920(DAT_004d99ac,*(short *)((int)this + 0x176) * 0x30,1);
          *(undefined4 *)((int)this + 0x194) = uVar4;
        }
        iVar3 = 0;
        if (*(int *)((int)this + 0x194) != 0) {
          iVar1 = param_3 * 0x30 + *(int *)((int)this + 0x194);
          local_20 = (short)*(undefined4 *)param_2;
          sStack_1e = (short)((uint)*(undefined4 *)param_2 >> 0x10);
          local_1c = (short)*(undefined4 *)(param_2 + 2);
          sStack_1a = (short)((uint)*(undefined4 *)(param_2 + 2) >> 0x10);
          _local_20 = CONCAT22(sStack_1e + -local_10._2_2_,local_20 + -(short)local_10);
          _local_1c = CONCAT22(sStack_1a + -local_10._2_2_,local_1c + -(short)local_10);
          iVar3 = (**(code **)(*(int *)this + 0x22c))(iVar1,param_3,&local_20,&local_18,param_4);
          if ((char)iVar3 != '\0') {
            *(short *)(iVar1 + 0x24) =
                 *(short *)(*(int *)((int)this + 0x152) + 4 + param_3 * 0x3a) -
                 *(short *)((int)this + 0xb8);
            *(short *)(iVar1 + 0x26) =
                 *(short *)(*(int *)((int)this + 0x152) + 6 + param_3 * 0x3a) -
                 *(short *)((int)this + 0xba);
            uVar5 = FUN_0041e3e0(this,iVar1,(int)(short)param_1,(int)param_1._2_2_);
            return uVar5;
          }
        }
      }
      goto LAB_00422173;
    }
  }
  local_5 = 0;
LAB_00422173:
  return CONCAT31((int3)((uint)iVar3 >> 8),local_5);
}


