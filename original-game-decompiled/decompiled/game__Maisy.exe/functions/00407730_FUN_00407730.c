
/* ==== FUN_00407730 @ 00407730 ==== 
 * signature: undefined __thiscall FUN_00407730(void * this, short * param_1)
 * body: 00407730-00407966
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00407730(void *this,short *param_1)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  short local_20;
  undefined4 local_1c;
  undefined4 local_18;
  short local_14;
  short sStack_12;
  undefined4 local_10;
  void *local_c;
  short local_6;
  
  local_6 = *(short *)(*(int *)((int)this + 0x56) + 0x26);
  if ((((local_6 != 0) &&
       (psVar1 = (short *)((int)this + 0xca), *psVar1 < *(short *)((int)this + 0xce))) &&
      (*(short *)((int)this + 0xcc) < *(short *)((int)this + 0xd0))) &&
     ((*(char *)((int)this + 0xa4) == '\0' ||
      ((*(char *)((int)this + 0xa3) == '\0' &&
       ((*(short *)((int)this + 0x40) == 3 || (*(short *)((int)this + 0x40) == 2)))))))) {
    local_1c = *(undefined4 *)psVar1;
    local_18 = *(undefined4 *)((int)this + 0xce);
    local_c = this;
    FUN_00410690();
    if (*(char *)((int)local_c + 0xa4) == '\0') {
      psVar8 = (short *)&local_1c;
    }
    else {
      local_14 = (short)*(undefined4 *)((int)local_c + 0xb8);
      if (local_14 <= (short)local_1c) {
        local_14 = (short)local_1c;
      }
      sStack_12 = (short)((uint)*(undefined4 *)((int)local_c + 0xb8) >> 0x10);
      local_10._0_2_ = (short)*(undefined4 *)((int)local_c + 0xbc);
      if ((short)local_18 <= (short)local_10) {
        local_10._0_2_ = (short)local_18;
      }
      local_10._2_2_ = (short)((uint)*(undefined4 *)((int)local_c + 0xbc) >> 0x10);
      if (sStack_12 <= local_1c._2_2_) {
        sStack_12 = local_1c._2_2_;
      }
      if (local_18._2_2_ <= local_10._2_2_) {
        local_10._2_2_ = local_18._2_2_;
      }
      psVar8 = &local_14;
    }
    FUN_00409020(local_c,(undefined4 *)psVar8);
    *psVar1 = 0;
    *(undefined2 *)((int)local_c + 0xd0) = 0;
    *(undefined2 *)((int)local_c + 0xcc) = 0;
    *(undefined2 *)((int)local_c + 0xce) = 0;
    iVar4 = FUN_00430190(*(int *)((int)local_c + 0x56));
    local_10 = local_10 & 0xffff;
    if (0 < local_6) {
      do {
        puVar5 = (undefined4 *)(local_10._2_2_ * 0x1a + iVar4);
        if (*(char *)(puVar5 + 6) != '\0') {
          sVar6 = *(short *)((int)puVar5 + 6);
          if (*(short *)((int)puVar5 + 6) <= local_1c._2_2_) {
            sVar6 = local_1c._2_2_;
          }
          sVar7 = *(short *)((int)puVar5 + 10);
          if (local_18._2_2_ <= *(short *)((int)puVar5 + 10)) {
            sVar7 = local_18._2_2_;
          }
          local_20 = *(short *)(puVar5 + 1);
          if (local_20 <= (short)local_1c) {
            local_20 = (short)local_1c;
          }
          sVar2 = *(short *)(puVar5 + 2);
          if ((short)local_18 <= *(short *)(puVar5 + 2)) {
            sVar2 = (short)local_18;
          }
          if ((sVar2 <= local_20) || (bVar3 = true, sVar7 <= sVar6)) {
            bVar3 = false;
          }
          if ((bVar3) &&
             ((((param_1 == (short *)0x0 || (*(short *)(puVar5 + 1) < *param_1)) ||
               (*(short *)((int)puVar5 + 6) < param_1[1])) ||
              ((param_1[2] < *(short *)(puVar5 + 2) || (param_1[3] < *(short *)((int)puVar5 + 10))))
              ))) {
            (**(code **)(*(int *)*puVar5 + 0x3ec))();
          }
        }
        sVar6 = local_10._2_2_ + 1;
        local_10 = CONCAT22(sVar6,(short)local_10);
      } while (sVar6 < local_6);
    }
    FUN_004301f0(*(int *)((int)local_c + 0x56));
    DAT_004da3ac = 0;
    _DAT_004da3a4 = 0;
    _DAT_004da3a8 = 0;
    FUN_00409020(local_c,(undefined4 *)0x0);
  }
  return;
}


