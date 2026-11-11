
/* ==== FUN_0047b7d0 @ 0047b7d0 ==== 
 * signature: undefined __thiscall FUN_0047b7d0(void * this, undefined4 * param_1, short * param_2, short * param_3, byte * param_4, undefined4 param_5, int * param_6, char param_7)
 * body: 0047b7d0-0047bcbb
 */

void __thiscall
FUN_0047b7d0(void *this,undefined4 *param_1,short *param_2,short *param_3,byte *param_4,
            undefined4 param_5,int *param_6,char param_7)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte **ppbVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined1 local_138 [48];
  undefined1 local_108 [8];
  undefined4 local_100 [2];
  undefined1 local_f8 [16];
  uint local_e8 [2];
  undefined1 *local_e0;
  short *local_dc;
  int local_d8;
  undefined1 *local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8 [9];
  byte *local_a4 [4];
  undefined4 local_94;
  short *local_90;
  undefined4 local_8c;
  short *local_88;
  int local_7a;
  int local_76;
  LPVOID local_72;
  undefined4 local_6e;
  uint *local_6a;
  undefined2 local_66;
  uint local_64 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined2 local_28;
  int local_24;
  undefined4 local_20;
  LPVOID local_1c;
  undefined1 local_18 [4];
  short *local_14;
  short local_10;
  short sStack_e;
  short local_c;
  short sStack_a;
  short local_6;
  
  local_6 = 1;
  local_66 = (ushort)(byte)local_66;
  local_24 = *(int *)((int)this + 0x8a0);
  puVar12 = local_64;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 < *(short *)(param_1 + 1)) {
    local_6 = -1;
    *(short *)(param_1 + 2) = *(short *)(param_1 + 1);
    *(short *)(param_1 + 1) = sVar1;
  }
  pbVar9 = param_4;
  if (param_4 == (byte *)0x0) {
    local_1c = (LPVOID)((uint)local_1c & 0xff000000);
    local_30 = (uint)local_1c;
    local_28 = 0;
    local_14 = (short *)CONCAT13(local_14._3_1_,0xffffff);
    local_2c = local_14;
    local_34 = local_14;
    pbVar9 = (byte *)&local_34;
  }
  local_14 = (short *)((int)param_1 + 2);
  *(undefined2 *)((int)this + 0x3a) = *(undefined2 *)((int)param_1 + 0x12);
  *(int *)((int)this + 0x30) = (int)*(short *)((int)param_1 + 6) - (int)*local_14;
  sVar1 = *(short *)(param_1 + 2);
  sVar2 = *(short *)(param_1 + 1);
  *(undefined2 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0x28;
  *(int *)((int)this + 0x34) = ((int)sVar1 - (int)sVar2) * (int)local_6;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_20 = *(undefined4 *)param_2;
  local_1c = *(LPVOID *)(param_2 + 2);
  if (param_7 == '\0') {
    local_10 = (short)local_20;
    sStack_e = (short)((uint)local_20 >> 0x10);
    local_c = (short)local_1c;
    sStack_a = (short)((uint)local_1c >> 0x10);
  }
  else {
    local_10 = (short)*(undefined4 *)param_3;
    sStack_e = (short)((uint)*(undefined4 *)param_3 >> 0x10);
    local_c = (short)*(undefined4 *)(param_3 + 2);
    sStack_a = (short)((uint)*(undefined4 *)(param_3 + 2) >> 0x10);
    FUN_0043bff0(&local_10,param_2,local_14);
  }
  if (*(char *)((int)param_1 + 1) == '\0') {
    local_1c = GlobalLock(*(HGLOBAL *)((int)param_1 + 0x1a));
  }
  else {
    local_1c = *(LPVOID *)((int)param_1 + 0x1e);
  }
  if (*(int *)((int)this + 0xcf4) == 0) {
    puVar6 = (undefined4 *)FUN_00434920(DAT_004d99ac,0x1000,0);
    *(undefined4 **)((int)this + 0xcf4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      FUN_00451fc0((int)this + 0x494,puVar6);
    }
  }
  local_64[0] = FUN_0047b660(this,pbVar9 + 8);
  local_64[1] = FUN_0047b660(this,pbVar9 + 4);
  local_64[2] = FUN_0047b660(this,pbVar9);
  local_64[3] = (uint)*(short *)(pbVar9 + 0xc);
  local_48 = *(undefined4 *)(pbVar9 + 8);
  local_44 = *(undefined4 *)(pbVar9 + 4);
  local_40 = *(undefined4 *)pbVar9;
  local_38 = param_1[5];
  if ((local_38 == 0) ||
     ((*(ushort *)((int)this + 0x47a) < 9 &&
      ((*(short *)((int)param_1 + 0x12) != 4 || (*(ushort *)((int)this + 0x47a) != 8)))))) {
    local_38 = (int)this + 0x54;
  }
  local_3c = (int)this + 0x494;
  if ((local_64[3] == 0x24) || (local_64[3] == 0x224)) {
    local_54 = 1;
  }
  local_50 = *(undefined4 *)((int)this + 0xcf4);
  local_4c = param_5;
  sStack_e = sStack_e + -*(short *)(param_1 + 1);
  sStack_a = sStack_a + -*(short *)(param_1 + 1);
  local_10 = local_10 + -*local_14;
  local_c = local_c + -*local_14;
  if (param_6 == (int *)0x0) {
    uVar10 = 0;
    if ((DAT_004e1c2c != (int *)0x0) &&
       (cVar4 = (**(code **)(*DAT_004e1c2c + 0x68))(1), cVar4 != '\0')) {
      puVar12 = local_e8;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined2 *)puVar12 = 0;
      FUN_00408ff0(*(void **)((int)DAT_004e1c2c + 0x3a),local_100);
      (**(code **)(*DAT_004e1c2c + 0x360))(local_138,1);
      (**(code **)(*DAT_004e1c2c + 0x38c))(local_108,1);
      (**(code **)(*DAT_004e1c2c + 0x3a0))((int)&local_6e + 2,1);
      (**(code **)(*DAT_004e1c2c + 0x398))(local_18,1);
      local_e0 = local_18;
      local_d8 = (int)&local_6e + 2;
      local_dc = param_3;
      local_d0 = 0;
      if (0 < *(int *)((int)this + 0x474)) {
        uVar10 = 2;
      }
      local_e8[0] = uVar10 | 1;
      local_d4 = local_f8;
      (**(code **)(*DAT_004e1c2c + 0x410))(local_d4);
      local_e8[1] = *(undefined4 *)((int)DAT_004e1c2c + 0xc2);
      puVar6 = param_1;
      puVar13 = local_c8;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined2 *)puVar13 = *(undefined2 *)puVar6;
      local_cc = local_3c;
      if (DAT_004da318 != (undefined1 *)0x0) {
        local_e0 = DAT_004da318;
      }
      uVar5 = (**(code **)(*DAT_004e1c2c + 0x44))(1,FUN_00461370,local_e8);
      local_66 = CONCAT11(uVar5,(byte)local_66);
    }
    if (local_66._1_1_ == '\0') {
      FUN_00439970((int)this + 0x46c,local_24,*param_3,param_3[1],param_3[2] - *param_3,
                   param_3[3] - param_3[1],(int)this + 0x2c,(int)local_1c,local_10,sStack_e,
                   local_c - local_10,sStack_a - sStack_e,(byte *)local_64);
    }
  }
  else {
    ppbVar11 = local_a4;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppbVar11 = (byte *)0x0;
      ppbVar11 = ppbVar11 + 1;
    }
    local_6a = local_64;
    local_a4[2] = *(byte **)((int)this + 0x468);
    local_a4[0] = (byte *)0x0;
    local_a4[1] = (byte *)0x0;
    local_94 = param_5;
    local_a4[3] = param_4;
    local_8c = 0;
    if (param_7 == '\0') {
      local_90 = &local_10;
      local_88 = param_3;
    }
    else {
      local_90 = local_14;
      local_88 = param_2;
    }
    local_7a = (int)this + 0x2c;
    local_76 = (int)this + 0x46c;
    local_72 = local_1c;
    local_6e = local_24;
    uVar7 = FUN_00470470(DAT_004dc564);
    local_66 = (ushort)uVar7;
    (**(code **)(*param_6 + 600))(0x14,local_a4,0x40);
  }
  if (*(char *)((int)param_1 + 1) == '\0') {
    GlobalUnlock(*(HGLOBAL *)((int)param_1 + 0x1a));
  }
  if (local_6 < 0) {
    uVar3 = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_1 + 1);
    *(undefined2 *)(param_1 + 1) = uVar3;
  }
  return;
}


