
/* ==== FUN_00461460 @ 00461460 ==== 
 * signature: undefined __thiscall FUN_00461460(void * this, char param_1)
 * body: 00461460-00461995
 */

void __thiscall FUN_00461460(void *this,char param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int *piVar7;
  void *this_00;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  undefined4 *puVar13;
  short *psVar14;
  undefined4 *puVar15;
  short *psVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  short *psVar19;
  int iVar20;
  undefined4 uVar21;
  short local_b0 [24];
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  int local_76;
  code *local_50;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort local_38;
  ushort local_36;
  short local_34;
  short local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ushort local_20;
  ushort local_1e;
  short local_1c;
  short local_1a;
  ushort local_18;
  ushort local_16;
  short local_14;
  short local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_6;
  
  if (((*(byte *)((int)this + 0x9c) & 0x80) == 0) ||
     (piVar7 = this, (*(byte *)(*(int *)((int)this + 0x62) + 0x1e) & 4) == 0)) {
    FUN_00408ff0(*(void **)((int)this + 0x3a),(undefined4 *)&local_18);
    uVar11 = local_6;
    uVar12 = local_6;
  }
  else {
    do {
      piVar7 = *(int **)((int)piVar7 + 0x62);
      if (piVar7 == (int *)0x0) break;
    } while ((*(byte *)(piVar7 + 0x27) & 0x40) == 0);
    (**(code **)(*piVar7 + 0x398))(&local_18,1);
    uVar12 = local_16;
    uVar11 = local_18;
    local_18 = 0;
    local_16 = 0;
    local_14 = local_14 - uVar11;
    local_12 = local_12 - uVar12;
  }
  if (((short)local_18 < local_14) && ((short)local_16 < local_12)) {
    local_44 = &local_80;
    (**(code **)(*(int *)this + 0x360))(local_44,1);
    (**(code **)(*(int *)this + 0x38c))(&local_20,1);
    (**(code **)(*(int *)this + 0x3a0))(&local_4c,1);
    (**(code **)(*(int *)this + 0x398))(&local_28,1);
    if ((*(byte *)((int)this + 0x9c) & 0x80) != 0) {
      local_7e = local_7e - uVar11;
      local_7a = local_7a - uVar11;
      local_7c = local_7c - uVar12;
      local_78 = local_78 - uVar12;
      local_20 = local_20 - uVar11;
      local_1c = local_1c - uVar11;
      local_1e = local_1e - uVar12;
      local_1a = local_1a - uVar12;
      local_4c = local_4c - uVar11;
      local_48 = local_48 - uVar11;
      local_4a = local_4a - uVar12;
      local_46 = local_46 - uVar12;
      local_28 = CONCAT22(local_28._2_2_ - uVar12,(ushort)local_28 - uVar11);
      local_24 = CONCAT22(local_24._2_2_ - uVar12,(short)local_24 - uVar11);
    }
    local_38 = local_18;
    if ((short)local_18 <= (short)local_20) {
      local_38 = local_20;
    }
    local_34 = local_14;
    if (local_1c <= local_14) {
      local_34 = local_1c;
    }
    local_36 = local_16;
    if ((short)local_16 <= (short)local_1e) {
      local_36 = local_1e;
    }
    local_32 = local_12;
    if (local_1a <= local_12) {
      local_32 = local_1a;
    }
    uVar11 = (ushort)local_28;
    if ((short)(ushort)local_28 <= (short)local_18) {
      uVar11 = local_18;
    }
    sVar4 = (short)local_24;
    if (local_14 <= (short)local_24) {
      sVar4 = local_14;
    }
    uVar12 = local_28._2_2_;
    if ((short)local_28._2_2_ <= (short)local_16) {
      uVar12 = local_16;
    }
    local_10 = CONCAT22(uVar12,(short)local_10);
    sVar5 = local_24._2_2_;
    if (local_12 <= local_24._2_2_) {
      sVar5 = local_12;
    }
    local_c = CONCAT22(sVar5,sVar4);
    *(short *)((int)this + 0xcc) = *(short *)((int)this + 0xcc) + local_20;
    *(short *)((int)this + 0xd0) = *(short *)((int)this + 0xd0) + local_20;
    *(short *)((int)this + 0xce) = *(short *)((int)this + 0xce) + local_1e;
    *(short *)((int)this + 0xd2) = *(short *)((int)this + 0xd2) + local_1e;
    if (((short)local_38 < local_34) && ((short)local_36 < local_32)) {
      local_50 = *(code **)(*(int *)this + 0x344);
      bVar2 = FUN_00408450(*(int *)((int)this + 0x3a));
      (*local_50)(&local_80,&local_28,&local_4c,&local_20,&local_38,1,bVar2);
      if (*(short *)((int)this + 300) != -1) {
        piVar7 = FUN_0046da90(this,'\x01','\x01');
        if ((((local_80 == 1) && (local_76 != 0)) &&
            (((piVar7 != (int *)0x0 && (cVar3 = (**(code **)(*piVar7 + 0x220))(), cVar3 != '\0')) ||
             (param_1 != '\0')))) &&
           (cVar3 = (**(code **)(*(int *)this + 0x36c))(&local_80,local_b0), cVar3 != '\0')) {
          local_44 = local_b0;
        }
        DAT_004e1c2c = this;
        if (((*(uint *)(*(int *)((int)this + 0x5a) + 0x1e) & 0x2000000) == 0) ||
           ((piVar7 != (int *)0x0 && (cVar3 = (**(code **)(*piVar7 + 0x220))(), cVar3 != '\0')))) {
          local_6 = CONCAT11(1,(byte)local_6);
        }
        else {
          local_6 = (ushort)(byte)local_6;
        }
        sVar6 = local_10._2_2_;
        iVar1 = local_3c;
        local_10 = CONCAT22(local_10._2_2_,uVar11);
        local_3c._0_2_ = (short)local_c;
        sVar4 = (short)local_3c;
        local_3c._2_2_ = (short)((uint)local_c >> 0x10);
        sVar5 = local_3c._2_2_;
        if (param_1 == '\0') {
          local_30 = local_10;
          local_2c = local_c;
          local_10 = local_28;
          local_c = local_24;
          if (local_6._1_1_ != '\0') {
            uVar12 = (short)local_28 + *(short *)((int)this + 0xc2);
            local_10._2_2_ = (short)((uint)local_28 >> 0x10);
            local_c._0_2_ = (short)local_24;
            sVar4 = (short)local_c + *(short *)((int)this + 0xc2);
            local_c._2_2_ = (short)((uint)local_24 >> 0x10);
            sVar5 = local_10._2_2_ + *(short *)((int)this + 0xc4);
            local_10 = CONCAT22(sVar5,uVar12);
            sVar10 = local_c._2_2_ + *(short *)((int)this + 0xc4);
            local_c = CONCAT22(sVar10,sVar4);
            if ((short)uVar12 <= (short)uVar11) {
              uVar12 = uVar11;
            }
            if ((short)local_3c <= sVar4) {
              sVar4 = (short)local_3c;
            }
            if (sVar5 <= sVar6) {
              sVar5 = sVar6;
            }
            local_30 = CONCAT22(sVar5,uVar12);
            if (local_3c._2_2_ <= sVar10) {
              sVar10 = local_3c._2_2_;
            }
            local_2c = CONCAT22(sVar10,sVar4);
          }
          piVar7 = *(int **)((int)this + 0x5a);
          uVar21 = *(undefined4 *)((int)this + 0x136);
          iVar20 = (int)this + 0x120;
          puVar13 = &local_30;
          puVar15 = &local_10;
          puVar17 = puVar15;
          psVar16 = local_44;
          local_3c = iVar1;
          uVar8 = FUN_004084c0(*(int *)((int)this + 0x3a));
          (**(code **)(*piVar7 + 0x300))(uVar8,puVar15,puVar17,puVar13,iVar20,psVar16,uVar21);
        }
        else {
          local_40 = local_10;
          local_3c = local_c;
          if (local_6._1_1_ != '\0') {
            sVar6 = *(short *)((int)this + 0xc4);
            local_2c = (int)sVar6;
            uVar12 = *(short *)((int)this + 0xcc) + *(short *)((int)this + 0xc2);
            sVar10 = *(short *)((int)this + 0xd0) + *(short *)((int)this + 0xc2);
            sVar9 = *(short *)((int)this + 0xce) + sVar6;
            *(ushort *)((int)this + 0xcc) = uVar12;
            *(short *)((int)this + 0xd0) = sVar10;
            *(short *)((int)this + 0xce) = sVar9;
            sVar6 = *(short *)((int)this + 0xd2) + sVar6;
            *(short *)((int)this + 0xd2) = sVar6;
            if ((short)uVar11 <= (short)uVar12) {
              uVar11 = uVar12;
            }
            if (sVar4 <= sVar10) {
              sVar10 = sVar4;
            }
            if (sVar9 <= local_10._2_2_) {
              sVar9 = local_10._2_2_;
            }
            local_40 = CONCAT22(sVar9,uVar11);
            if (sVar5 <= sVar6) {
              sVar6 = sVar5;
            }
            local_3c = CONCAT22(sVar6,sVar10);
          }
          local_c = *(int *)((int)this + 0xd0);
          cVar3 = '\x01';
          local_10 = *(undefined4 *)((int)this + 0xcc);
          piVar7 = *(int **)((int)this + 0x136);
          psVar16 = (short *)&local_40;
          psVar14 = (short *)&local_10;
          pbVar18 = (byte *)((int)this + 0x120);
          puVar13 = (undefined4 *)((int)this + 0xca);
          psVar19 = local_44;
          this_00 = (void *)FUN_004084c0(*(int *)((int)this + 0x3a));
          FUN_0047b7d0(this_00,puVar13,psVar14,psVar16,pbVar18,psVar19,piVar7,cVar3);
          if (local_6._1_1_ != '\0') {
            *(short *)((int)this + 0xcc) =
                 *(short *)((int)this + 0xcc) + -*(short *)((int)this + 0xc2);
            *(short *)((int)this + 0xd0) =
                 *(short *)((int)this + 0xd0) + -*(short *)((int)this + 0xc2);
            *(short *)((int)this + 0xce) =
                 *(short *)((int)this + 0xce) + -*(short *)((int)this + 0xc4);
            *(short *)((int)this + 0xd2) =
                 *(short *)((int)this + 0xd2) + -*(short *)((int)this + 0xc4);
          }
        }
        DAT_004e1c2c = (void *)0x0;
      }
      bVar2 = FUN_00408450(*(int *)((int)this + 0x3a));
      (*local_50)(&local_80,&local_28,&local_4c,&local_20,&local_38,3,bVar2);
      FUN_00408e10(*(void **)((int)this + 0x3a),(short *)&local_38);
    }
    *(short *)((int)this + 0xcc) = *(short *)((int)this + 0xcc) + -local_20;
    *(short *)((int)this + 0xd0) = *(short *)((int)this + 0xd0) + -local_20;
    *(short *)((int)this + 0xce) = *(short *)((int)this + 0xce) + -local_1e;
    *(short *)((int)this + 0xd2) = *(short *)((int)this + 0xd2) + -local_1e;
    (**(code **)(*(int *)this + 0x368))();
  }
  return;
}


