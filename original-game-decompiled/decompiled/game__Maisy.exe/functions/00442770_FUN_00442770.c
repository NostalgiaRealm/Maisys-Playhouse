
/* ==== FUN_00442770 @ 00442770 ==== 
 * signature: undefined4 __thiscall FUN_00442770(void * this, short param_1)
 * body: 00442770-00442a01
 */

undefined4 __thiscall FUN_00442770(void *this,short param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int in_EAX;
  int iVar6;
  void *this_00;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short sStack_16;
  short local_14;
  short sStack_12;
  undefined4 local_10;
  short local_c;
  short sStack_a;
  short local_8;
  short sStack_6;
  
  if (param_1 == -1) {
    *(undefined2 *)((int)this + 0x86) = 0xffff;
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if (*(int *)((int)this + 0x42) != 0) {
    in_EAX = (**(code **)(*(int *)this + 0x244))();
    if ((in_EAX != 0) && (DAT_004dbdc4 == '\0')) {
      if (-1 < param_1) {
        in_EAX = FUN_00420aa0(*(int **)((int)this + 0x3a));
        if ((param_1 < in_EAX) && (*(short *)((int)this + 0x68) != param_1)) {
          (**(code **)(*(int *)this + 0x298))(&local_20);
          local_10 = *(undefined4 *)(*(int *)((int)this + 0x3e) + 0xc2);
          FUN_00421d50(*(void **)((int)this + 0x3a),(int *)&local_c,*(short *)((int)this + 0x68));
          (**(code **)(**(int **)((int)this + 0x3a) + 0x1e8))(&local_c,&local_20,1);
          sVar5 = local_10._2_2_;
          sVar4 = local_c + (short)local_10;
          sVar2 = local_8 + (short)local_10;
          sStack_a = sStack_a + local_10._2_2_;
          sStack_6 = sStack_6 + local_10._2_2_;
          local_c = sVar4;
          if (sVar4 <= local_20) {
            local_c = local_20;
          }
          local_8 = sVar2;
          if (local_1c <= sVar2) {
            local_8 = local_1c;
          }
          if (sStack_a <= local_1e) {
            sStack_a = local_1e;
          }
          if (local_1a <= sStack_6) {
            sStack_6 = local_1a;
          }
          *(short *)((int)this + 0x68) = param_1;
          local_10 = (int)(short)local_10;
          local_18 = local_c;
          sStack_16 = sStack_a;
          local_14 = local_8;
          sStack_12 = sStack_6;
          FUN_00421d50(*(void **)((int)this + 0x3a),(int *)&local_c,param_1);
          (**(code **)(**(int **)((int)this + 0x3a) + 0x1e8))(&local_c,&local_20,1);
          sVar4 = sStack_a + sVar5;
          sVar5 = sStack_6 + sVar5;
          sVar2 = local_c + (short)local_10;
          if ((short)(local_c + (short)local_10) <= local_20) {
            sVar2 = local_20;
          }
          sVar3 = local_8 + (short)local_10;
          if (local_1c <= (short)(local_8 + (short)local_10)) {
            sVar3 = local_1c;
          }
          if (sVar4 <= local_1e) {
            sVar4 = local_1e;
          }
          _local_c = CONCAT22(sVar4,sVar2);
          if (local_1a <= sVar5) {
            sVar5 = local_1a;
          }
          _local_8 = CONCAT22(sVar5,sVar3);
          if (local_18 <= sVar2) {
            sVar2 = local_18;
          }
          if (sVar3 <= local_14) {
            sVar3 = local_14;
          }
          if (sStack_16 <= sVar4) {
            sVar4 = sStack_16;
          }
          _local_18 = CONCAT22(sVar4,sVar2);
          if (sVar5 <= sStack_12) {
            sVar5 = sStack_12;
          }
          _local_14 = CONCAT22(sVar5,sVar3);
          if ((*(char *)((int)this + 0x8c) != '\0') &&
             ((*(byte *)(*(int **)((int)this + 0x3e) + 0x27) & 2) != 0)) {
            cVar1 = (**(code **)(**(int **)((int)this + 0x3e) + 0x130))();
            if (cVar1 == '\0') {
              iVar6 = FUN_0041ed90((int)this);
              if (*(char *)(iVar6 + 0xaa) == '\0') {
                *(short *)((int)this + 0x68) = param_1;
                piVar9 = (int *)&local_18;
                piVar8 = *(int **)((int)this + 0x3e);
                this_00 = (void *)FUN_0041ed90((int)this);
                uVar7 = FUN_00407280(this_00,piVar8,piVar9);
                return CONCAT31((int3)((uint)uVar7 >> 8),1);
              }
            }
          }
          (**(code **)(*(int *)this + 0x308))(&local_18);
          uVar7 = (**(code **)(*(int *)this + 0x2d0))();
          return CONCAT31((int3)((uint)uVar7 >> 8),1);
        }
      }
      goto LAB_004429f7;
    }
  }
  *(short *)((int)this + 0x68) = param_1;
LAB_004429f7:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


