
/* ==== FUN_11013070 @ 11013070 ==== 
 * signature: undefined __cdecl FUN_11013070(undefined4 * param_1, int param_2, int * param_3)
 * body: 11013070-110136f0
 */

void __cdecl FUN_11013070(undefined4 *param_1,int param_2,int *param_3)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  DWORD DVar7;
  uint uVar8;
  short sVar9;
  ushort local_42;
  short local_3c;
  short local_3a;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_3a = *(short *)(param_2 + 0x22);
  local_4 = *(int *)(param_2 + 0x24) / 100000;
  psVar1 = (short *)param_3[5];
  local_c = *(undefined4 *)psVar1;
  uVar4 = psVar1[2] - *psVar1;
  uVar5 = psVar1[3] - psVar1[1];
  local_8 = *(undefined4 *)(psVar1 + 2);
  local_38 = *(undefined4 *)param_3[7];
  local_34 = ((undefined4 *)param_3[7])[1];
  if ((*(byte *)(param_3 + 8) & 2) != 0) {
    FUN_11023060(param_1,*(undefined4 *)((int)param_3 + 0x22));
  }
  if (3 < (int)*(short *)(param_2 + 0x1e) - 900U) {
    FUN_11012930(param_1,param_2,param_3);
    return;
  }
  uVar2 = (short)uVar5 >> 0xf;
  uVar3 = (short)uVar4 >> 0xf;
  switch(*(short *)(param_2 + 0x1e)) {
  case 900:
    if (local_3a == 0) {
      local_3a = (uVar5 ^ uVar2) - uVar2;
    }
    local_14 = local_38;
    local_10 = local_34;
    local_20 = local_34;
    local_3c = 1;
    if (0 < local_3a) {
      local_24 = (int)(short)uVar5;
      local_1c = (int)local_3a;
      local_2c = (int)(short)local_38;
      local_28 = (int)local_38._2_2_;
      local_18 = (short)local_34 - local_2c;
      local_42 = uVar5;
      do {
        DVar7 = timeGetTime();
        uVar8 = local_4 + (DVar7 * 6) / 100;
        uVar4 = uVar5 - (short)((local_3c * local_24) / local_1c);
        local_10 = CONCAT22(local_14._2_2_ + uVar4,(short)local_10);
        local_30 = CONCAT22(local_30._2_2_,(*(short *)(param_3[7] + 2) - uVar4) + local_42);
        local_38 = CONCAT22(*(short *)(param_3[7] + 2) + uVar4,(short)local_38);
        local_8 = CONCAT22(*(short *)(param_3[5] + 6) - uVar4,(undefined2)local_8);
        FUN_110115c0(param_1);
        BitBlt((HDC)param_3[2],local_2c,local_28,local_18,local_10._2_2_ - local_28,(HDC)param_3[2],
               local_2c,(int)(short)local_30,0xcc0020);
        FUN_110021b0(param_1,*param_3,&local_c,&local_38,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar7 = timeGetTime();
        } while ((DVar7 * 6) / 100 < uVar8);
        local_3c = local_3c + 1;
        local_42 = uVar4;
      } while (local_3c <= local_3a);
      return;
    }
    break;
  case 0x385:
    if (local_3a == 0) {
      local_3a = (uVar5 ^ uVar2) - uVar2;
    }
    local_3c = 1;
    local_24 = local_38;
    local_20 = local_34;
    if (0 < local_3a) {
      local_14 = (int)(short)uVar5;
      local_1c = (int)local_3a;
      local_30 = (int)(short)local_38;
      local_18 = (int)local_34._2_2_;
      local_28 = (short)local_34 - local_30;
      sVar9 = 0;
      do {
        DVar7 = timeGetTime();
        uVar8 = local_4 + (DVar7 * 6) / 100;
        sVar6 = (short)((local_3c * local_14) / local_1c);
        local_2c = CONCAT22(local_2c._2_2_,sVar6);
        local_24 = CONCAT22(sVar9 + *(short *)(param_3[7] + 2),(short)local_24);
        sVar9 = sVar6 + *(short *)(param_3[7] + 2);
        local_34 = CONCAT22(sVar9,(short)local_34);
        local_c = CONCAT22(*(short *)(param_3[5] + 6) - sVar6,(undefined2)local_c);
        FUN_110115c0(param_1);
        BitBlt((HDC)param_3[2],local_30,(int)sVar9,local_28,local_18 - sVar9,(HDC)param_3[2],
               local_30,(int)local_24._2_2_,0xcc0020);
        FUN_110021b0(param_1,*param_3,&local_c,&local_38,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar7 = timeGetTime();
        } while ((DVar7 * 6) / 100 < uVar8);
        local_3c = local_3c + 1;
        sVar9 = (short)local_2c;
      } while (local_3c <= local_3a);
      return;
    }
    break;
  case 0x386:
    if (local_3a == 0) {
      local_3a = (uVar4 ^ uVar3) - uVar3;
    }
    local_14 = local_38;
    local_10 = local_34;
    local_20 = local_34;
    local_3c = 1;
    if (0 < local_3a) {
      local_24 = (int)(short)uVar4;
      local_1c = (int)local_3a;
      local_2c = (int)local_38._2_2_;
      local_28 = (int)(short)local_38;
      local_18 = local_34._2_2_ - local_2c;
      local_42 = uVar4;
      do {
        DVar7 = timeGetTime();
        uVar8 = local_4 + (DVar7 * 6) / 100;
        uVar5 = uVar4 - (short)((local_3c * local_24) / local_1c);
        local_10 = CONCAT22(local_10._2_2_,(short)local_14 + uVar5);
        local_30 = CONCAT22(local_30._2_2_,(*(short *)param_3[7] - uVar5) + local_42);
        local_38 = CONCAT22(local_38._2_2_,*(short *)param_3[7] + uVar5);
        local_8 = CONCAT22(local_8._2_2_,*(short *)(param_3[5] + 4) - uVar5);
        FUN_110115c0(param_1);
        BitBlt((HDC)param_3[2],local_28,local_2c,(short)local_10 - local_28,local_18,(HDC)param_3[2]
               ,(int)(short)local_30,local_2c,0xcc0020);
        FUN_110021b0(param_1,*param_3,&local_c,&local_38,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar7 = timeGetTime();
        } while ((DVar7 * 6) / 100 < uVar8);
        local_3c = local_3c + 1;
        local_42 = uVar5;
      } while (local_3c <= local_3a);
      return;
    }
    break;
  case 0x387:
    if (local_3a == 0) {
      local_3a = (uVar4 ^ uVar3) - uVar3;
    }
    local_3c = 1;
    local_24 = local_38;
    local_20 = local_34;
    if (0 < local_3a) {
      local_14 = (int)(short)uVar4;
      local_1c = (int)local_3a;
      local_30 = (int)local_38._2_2_;
      local_28 = (int)(short)local_34;
      local_18 = local_34._2_2_ - local_30;
      sVar9 = 0;
      do {
        DVar7 = timeGetTime();
        uVar8 = local_4 + (DVar7 * 6) / 100;
        sVar6 = (short)((local_3c * local_14) / local_1c);
        local_2c = CONCAT22(local_2c._2_2_,sVar6);
        local_24 = CONCAT22(local_24._2_2_,sVar9 + *(short *)param_3[7]);
        sVar9 = sVar6 + *(short *)param_3[7];
        local_34 = CONCAT22(local_34._2_2_,sVar9);
        local_c = CONCAT22(local_c._2_2_,*(short *)(param_3[5] + 4) - sVar6);
        FUN_110115c0(param_1);
        BitBlt((HDC)param_3[2],(int)sVar9,local_30,local_28 - sVar9,local_18,(HDC)param_3[2],
               (int)(short)local_24,local_30,0xcc0020);
        FUN_110021b0(param_1,*param_3,&local_c,&local_38,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar7 = timeGetTime();
        } while ((DVar7 * 6) / 100 < uVar8);
        local_3c = local_3c + 1;
        sVar9 = (short)local_2c;
      } while (local_3c <= local_3a);
    }
  }
  return;
}


