
/* ==== FUN_00421dc0 @ 00421dc0 ==== 
 * signature: undefined1 __thiscall FUN_00421dc0(void * this, short * param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 * param_5)
 * body: 00421dc0-00421f36
 */

undefined1 __thiscall
FUN_00421dc0(void *this,short *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 local_1c;
  short local_18;
  short sStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  (**(code **)(*(int *)this + 0x114))();
  if ((param_3 < *(short *)((int)this + 0x176)) && (*(int *)((int)this + 0x152) != 0)) {
    if (*(int *)((int)this + 0x194) == 0) {
      uVar3 = FUN_00434920(DAT_004d99ac,*(short *)((int)this + 0x176) * 0x30,1);
      *(undefined4 *)((int)this + 0x194) = uVar3;
    }
    if (*(int *)((int)this + 0x194) != 0) {
      puVar1 = (undefined4 *)(param_3 * 0x30 + *(int *)((int)this + 0x194));
      if (*(char *)((int)puVar1 + 2) == '\0') {
        local_14 = *(undefined4 *)param_1;
        local_10 = *(undefined4 *)(param_1 + 2);
        if (*(int *)((int)this + 0x152) == 0) {
          puVar4 = (undefined4 *)((int)this + 0xb8);
        }
        else {
          puVar4 = (undefined4 *)(*(int *)((int)this + 0x152) + param_3 * 0x3a + 4);
        }
        local_c = *puVar4;
        local_8 = puVar4[1];
        FUN_0043bff0((short *)&local_c,(short *)((int)this + 0xb8),param_1);
        sVar2 = -(short)local_c;
        sVar5 = -local_c._2_2_;
        local_18 = (short)local_8;
        sStack_16 = (short)((uint)local_8 >> 0x10);
        local_1c = 0;
        _local_18 = CONCAT22(sStack_16 + sVar5,local_18 + sVar2);
        local_14 = CONCAT22(local_14._2_2_ + sVar5,(short)local_14 + sVar2);
        local_10 = CONCAT22(local_10._2_2_ + sVar5,(short)local_10 + sVar2);
        (**(code **)(*(int *)this + 0x210))(&local_14,&local_1c,param_3,param_4,puVar1);
        *(short *)(puVar1 + 9) =
             *(short *)(*(int *)((int)this + 0x152) + 4 + param_3 * 0x3a) -
             *(short *)((int)this + 0xb8);
        *(short *)((int)puVar1 + 0x26) =
             *(short *)(*(int *)((int)this + 0x152) + 6 + param_3 * 0x3a) -
             *(short *)((int)this + 0xba);
      }
      puVar4 = puVar1;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *param_5 = *puVar4;
        puVar4 = puVar4 + 1;
        param_5 = param_5 + 1;
      }
      uVar7 = *(undefined1 *)((int)puVar1 + 2);
    }
  }
  return uVar7;
}


