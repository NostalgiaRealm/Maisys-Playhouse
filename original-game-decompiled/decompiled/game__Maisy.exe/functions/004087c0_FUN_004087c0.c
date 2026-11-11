
/* ==== FUN_004087c0 @ 004087c0 ==== 
 * signature: undefined __thiscall FUN_004087c0(void * this, short * param_1, char param_2)
 * body: 004087c0-00408d4d
 */

void __thiscall FUN_004087c0(void *this,short *param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  ushort *puVar7;
  int *piVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  short sVar12;
  short sVar13;
  ushort uVar14;
  short local_50 [2];
  int local_4c;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  short local_2c [2];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  short local_10;
  char local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == (short *)0x0) {
    local_8 = *(undefined4 *)((int)this + 0xbc);
    local_c = *(undefined4 *)((int)this + 0xb8);
  }
  else {
    local_c = *(undefined4 *)param_1;
    local_8 = *(undefined4 *)(param_1 + 2);
  }
  if (*(char *)((int)this + 0xa4) != '\0') {
    sVar5 = *(short *)((int)this + 0xb8);
    if (*(short *)((int)this + 0xb8) <= (short)local_c) {
      sVar5 = (short)local_c;
    }
    sVar3 = *(short *)((int)this + 0xbc);
    if ((short)local_8 <= *(short *)((int)this + 0xbc)) {
      sVar3 = (short)local_8;
    }
    sVar4 = *(short *)((int)this + 0xba);
    if (*(short *)((int)this + 0xba) <= local_c._2_2_) {
      sVar4 = local_c._2_2_;
    }
    local_c = CONCAT22(sVar4,sVar5);
    sVar5 = *(short *)((int)this + 0xbe);
    if (local_8._2_2_ <= *(short *)((int)this + 0xbe)) {
      sVar5 = local_8._2_2_;
    }
    local_8 = CONCAT22(sVar5,sVar3);
  }
  cVar2 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if (cVar2 == '\0') {
    if ((short)local_c < (short)local_8) {
      if (local_c._2_2_ < local_8._2_2_) {
        if (*(char *)((int)this + 0xa4) == '\0') {
          FUN_00410630(*(void **)((int)this + 0x8e),&local_48);
          if (local_48 <= (short)local_c) {
            local_48 = (short)local_c;
          }
          if ((short)local_8 <= local_44) {
            local_44 = (short)local_8;
          }
          if (local_46 <= local_c._2_2_) {
            local_46 = local_c._2_2_;
          }
          local_c = CONCAT22(local_46,local_48);
          if (local_8._2_2_ <= local_42) {
            local_42 = local_8._2_2_;
          }
          local_8 = CONCAT22(local_42,local_44);
        }
        sVar5 = *(short *)((int)this + 0xce);
        sVar3 = *(short *)((int)this + 0xca);
        if ((sVar3 < sVar5) &&
           (sVar4 = *(short *)((int)this + 0xd0), *(short *)((int)this + 0xcc) < sVar4)) {
          local_10 = (short)local_c;
          if (sVar3 <= (short)local_c) {
            local_10 = sVar3;
          }
          *(short *)((int)this + 0xca) = local_10;
          sVar3 = (short)local_8;
          if ((short)local_8 <= sVar5) {
            sVar3 = sVar5;
          }
          *(short *)((int)this + 0xce) = sVar3;
          sVar5 = local_c._2_2_;
          if (*(short *)((int)this + 0xcc) <= local_c._2_2_) {
            sVar5 = *(short *)((int)this + 0xcc);
          }
          *(short *)((int)this + 0xcc) = sVar5;
          sVar5 = local_8._2_2_;
          if (local_8._2_2_ <= sVar4) {
            sVar5 = sVar4;
          }
          *(short *)((int)this + 0xd0) = sVar5;
        }
        else {
          *(undefined4 *)((int)this + 0xca) = local_c;
          *(undefined4 *)((int)this + 0xce) = local_8;
        }
        if (((*(char *)((int)this + 0xaf) == '\0') && (*(short *)((int)this + 0x40) != 2)) &&
           (*(short *)((int)this + 0x40) != 1)) {
          if (((*(char *)((int)this + 0xa4) != '\0') && (*(int *)((int)this + 0x4a) != 0)) &&
             (iVar6 = FUN_004084c0((int)this),
             *(int *)(*(int *)((int)this + 0x4a) + 0x26) <= *(int *)(iVar6 + 0xcec))) {
            local_d = '\x01';
            if (param_1 == (short *)0x0) {
              local_18 = *(undefined4 *)((int)this + 0xbc);
              local_1c = *(undefined4 *)((int)this + 0xb8);
            }
            else {
              sVar5 = *(short *)((int)this + 0xb8);
              if (*(short *)((int)this + 0xb8) <= *param_1) {
                sVar5 = *param_1;
              }
              sVar3 = param_1[2];
              if (*(short *)((int)this + 0xbc) <= param_1[2]) {
                sVar3 = *(short *)((int)this + 0xbc);
              }
              sVar4 = param_1[1];
              if (param_1[1] <= *(short *)((int)this + 0xba)) {
                sVar4 = *(short *)((int)this + 0xba);
              }
              local_1c = CONCAT22(sVar4,sVar5);
              sVar5 = *(short *)((int)this + 0xbe);
              if (param_1[3] <= *(short *)((int)this + 0xbe)) {
                sVar5 = param_1[3];
              }
              local_18 = CONCAT22(sVar5,sVar3);
              FUN_00408d50((ushort *)&local_1c);
            }
            if (((short)(ushort)local_18 <= (short)(ushort)local_1c) ||
               ((short)local_18._2_2_ <= (short)local_1c._2_2_)) {
              local_d = '\0';
            }
            local_3c = (int)(short)local_18._2_2_;
            local_40 = (int)(short)local_1c._2_2_;
            local_34 = (int)(short)(ushort)local_18;
            local_38 = (int)(short)(ushort)local_1c;
            local_30 = (local_3c - local_40) * (local_34 - local_38);
            local_28 = *(int *)(*(int *)((int)this + 0x4a) + 0x26);
            local_14 = local_30;
            if ((local_28 != 0) && (local_d != '\0')) {
              puVar7 = (ushort *)FUN_00430190(*(int *)((int)this + 0x4a));
              local_4c = 0;
              if (0 < local_28) {
                do {
                  uVar11 = puVar7[1];
                  if (((((short)uVar11 <= local_40) && (local_3c <= (short)puVar7[3])) &&
                      ((short)*puVar7 <= local_38)) && (local_34 <= (short)puVar7[2])) {
LAB_00408b89:
                    local_d = '\0';
                    break;
                  }
                  uVar14 = *puVar7;
                  if ((short)(ushort)local_1c <= (short)*puVar7) {
                    uVar14 = (ushort)local_1c;
                  }
                  uVar9 = puVar7[2];
                  if ((short)puVar7[2] <= (short)(ushort)local_18) {
                    uVar9 = (ushort)local_18;
                  }
                  uVar10 = local_1c._2_2_;
                  if ((short)uVar11 <= (short)local_1c._2_2_) {
                    uVar10 = uVar11;
                  }
                  local_24 = CONCAT22(uVar10,(undefined2)local_24);
                  uVar11 = puVar7[3];
                  if ((short)puVar7[3] <= (short)local_18._2_2_) {
                    uVar11 = local_18._2_2_;
                  }
                  local_20 = CONCAT22(uVar11,uVar9);
                  iVar6 = ((int)(short)uVar11 - (int)(short)uVar10) *
                          ((int)(short)uVar9 - (int)(short)uVar14);
                  if (iVar6 <= *(int *)(puVar7 + 4) + local_30) {
                    local_24 = CONCAT22(uVar10,uVar14);
                    *(undefined4 *)puVar7 = local_24;
                    *(undefined4 *)(puVar7 + 2) = local_20;
                    *(int *)(puVar7 + 4) = iVar6;
                    goto LAB_00408b89;
                  }
                  puVar7 = puVar7 + 6;
                  local_4c = local_4c + 1;
                } while (local_4c < local_28);
              }
              FUN_004301f0(*(int *)((int)this + 0x4a));
            }
            if ((param_2 != '\0') &&
               (piVar8 = (int *)(**(code **)(**(int **)((int)this + 0x8e) + 0x138))(),
               piVar8 != (int *)0x0)) {
              (**(code **)(*piVar8 + 0x38c))(local_2c,1);
              sVar5 = FUN_00408d80(local_2c,(short *)&local_1c,local_50);
              if ((char)sVar5 != '\0') {
                (**(code **)(**(int **)((int)this + 0x8e) + 0x134))();
              }
            }
            if (local_d != '\0') {
              (**(code **)(**(int **)((int)this + 0x4a) + 0xe8))(&local_1c);
            }
          }
          sVar5 = *(short *)((int)this + 0xc2);
          sVar3 = *(short *)((int)this + 0xc6);
          if (sVar5 < sVar3) {
            sVar4 = *(short *)((int)this + 0xc4);
            sVar13 = *(short *)((int)this + 200);
            if (sVar4 < sVar13) {
              sVar12 = (short)local_c;
              if (sVar5 <= (short)local_c) {
                sVar12 = sVar5;
              }
              *(short *)((int)this + 0xc2) = sVar12;
              sVar5 = (short)local_8;
              if ((short)local_8 <= sVar3) {
                sVar5 = sVar3;
              }
              *(short *)((int)this + 0xc6) = sVar5;
              if (sVar4 <= local_c._2_2_) {
                local_c._2_2_ = sVar4;
              }
              *(short *)((int)this + 0xc4) = local_c._2_2_;
              if (local_8._2_2_ <= sVar13) {
                local_8._2_2_ = sVar13;
              }
              *(short *)((int)this + 200) = local_8._2_2_;
              return;
            }
          }
          *(undefined4 *)((int)this + 0xc2) = local_c;
          *(undefined4 *)((int)this + 0xc6) = local_8;
          return;
        }
        if (param_1 != (short *)0x0) {
          sVar5 = *(short *)((int)this + 0xc2);
          sVar3 = *(short *)((int)this + 0xc6);
          if ((sVar5 < sVar3) &&
             (sVar4 = *(short *)((int)this + 200), *(short *)((int)this + 0xc4) < sVar4)) {
            sVar13 = *param_1;
            if (sVar5 <= *param_1) {
              sVar13 = sVar5;
            }
            *(short *)((int)this + 0xc2) = sVar13;
            sVar5 = param_1[2];
            if (param_1[2] <= sVar3) {
              sVar5 = sVar3;
            }
            *(short *)((int)this + 0xc6) = sVar5;
            sVar5 = param_1[1];
            if (*(short *)((int)this + 0xc4) <= param_1[1]) {
              sVar5 = *(short *)((int)this + 0xc4);
            }
            *(short *)((int)this + 0xc4) = sVar5;
            sVar5 = param_1[3];
            if (param_1[3] <= sVar4) {
              sVar5 = sVar4;
            }
            *(short *)((int)this + 200) = sVar5;
            return;
          }
          uVar1 = *(undefined4 *)(param_1 + 2);
          *(undefined4 *)((int)this + 0xc2) = *(undefined4 *)param_1;
          *(undefined4 *)((int)this + 0xc6) = uVar1;
          return;
        }
        *(undefined4 *)((int)this + 0xc2) = *(undefined4 *)((int)this + 0xb8);
        *(undefined4 *)((int)this + 0xc6) = *(undefined4 *)((int)this + 0xbc);
      }
    }
  }
  return;
}


