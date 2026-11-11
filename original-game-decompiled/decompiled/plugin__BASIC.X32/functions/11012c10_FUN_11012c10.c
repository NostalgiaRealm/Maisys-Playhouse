
/* ==== FUN_11012c10 @ 11012c10 ==== 
 * signature: undefined __cdecl FUN_11012c10(undefined4 * param_1, int param_2, int * param_3)
 * body: 11012c10-11013058
 */

void __cdecl FUN_11012c10(undefined4 *param_1,int param_2,int *param_3)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  DWORD DVar6;
  short sVar7;
  uint uVar8;
  short local_20;
  short local_1e;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_1e = *(short *)(param_2 + 0x22);
  local_4 = *(int *)(param_2 + 0x24) / 100000;
  if ((*(byte *)(param_3 + 8) & 2) != 0) {
    FUN_11023060(param_1,*(undefined4 *)((int)param_3 + 0x22));
  }
  psVar1 = (short *)param_3[5];
  local_c = *(undefined4 *)psVar1;
  uVar4 = psVar1[2] - *psVar1;
  uVar5 = psVar1[3] - psVar1[1];
  local_8 = *(undefined4 *)(psVar1 + 2);
  local_14 = *(undefined4 *)param_3[7];
  local_10 = ((undefined4 *)param_3[7])[1];
  if (3 < (int)*(short *)(param_2 + 0x1e) - 900U) {
    FUN_11012930(param_1,param_2,param_3);
    return;
  }
  uVar2 = (short)uVar5 >> 0xf;
  uVar3 = (short)uVar4 >> 0xf;
  switch(*(short *)(param_2 + 0x1e)) {
  case 900:
    if (local_1e == 0) {
      local_1e = (uVar5 ^ uVar2) - uVar2;
    }
    local_20 = 1;
    if (0 < local_1e) {
      do {
        DVar6 = timeGetTime();
        uVar8 = local_4 + (DVar6 * 6) / 100;
        sVar7 = uVar5 - (short)(((int)local_20 * (int)(short)uVar5) / (int)local_1e);
        local_14 = CONCAT22(*(short *)(param_3[7] + 2) + sVar7,(undefined2)local_14);
        local_8 = CONCAT22(*(short *)(param_3[5] + 6) - sVar7,(undefined2)local_8);
        FUN_110115c0(param_1);
        FUN_110021b0(param_1,*param_3,&local_c,&local_14,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar6 = timeGetTime();
        } while ((DVar6 * 6) / 100 < uVar8);
        local_20 = local_20 + 1;
      } while (local_20 <= local_1e);
      return;
    }
    break;
  case 0x385:
    if (local_1e == 0) {
      local_1e = (uVar5 ^ uVar2) - uVar2;
    }
    local_20 = 1;
    if (0 < local_1e) {
      do {
        DVar6 = timeGetTime();
        uVar8 = local_4 + (DVar6 * 6) / 100;
        sVar7 = (short)(((int)local_20 * (int)(short)uVar5) / (int)local_1e);
        local_10 = CONCAT22(*(short *)(param_3[7] + 2) + sVar7,(undefined2)local_10);
        local_c = CONCAT22(*(short *)(param_3[5] + 6) - sVar7,(undefined2)local_c);
        FUN_110115c0(param_1);
        FUN_110021b0(param_1,*param_3,&local_c,&local_14,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar6 = timeGetTime();
        } while ((DVar6 * 6) / 100 < uVar8);
        local_20 = local_20 + 1;
      } while (local_20 <= local_1e);
      return;
    }
    break;
  case 0x386:
    if (local_1e == 0) {
      local_1e = (uVar4 ^ uVar3) - uVar3;
    }
    local_20 = 1;
    if (0 < local_1e) {
      do {
        DVar6 = timeGetTime();
        uVar8 = local_4 + (DVar6 * 6) / 100;
        sVar7 = uVar4 - (short)(((int)local_20 * (int)(short)uVar4) / (int)local_1e);
        local_14 = CONCAT22(local_14._2_2_,*(short *)param_3[7] + sVar7);
        local_8 = CONCAT22(local_8._2_2_,*(short *)(param_3[5] + 4) - sVar7);
        FUN_110115c0(param_1);
        FUN_110021b0(param_1,*param_3,&local_c,&local_14,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar6 = timeGetTime();
        } while ((DVar6 * 6) / 100 < uVar8);
        local_20 = local_20 + 1;
      } while (local_20 <= local_1e);
      return;
    }
    break;
  case 0x387:
    if (local_1e == 0) {
      local_1e = (uVar4 ^ uVar3) - uVar3;
    }
    local_20 = 1;
    if (0 < local_1e) {
      do {
        DVar6 = timeGetTime();
        uVar8 = local_4 + (DVar6 * 6) / 100;
        sVar7 = (short)(((int)local_20 * (int)(short)uVar4) / (int)local_1e);
        local_10 = CONCAT22(local_10._2_2_,*(short *)param_3[7] + sVar7);
        local_c = CONCAT22(local_c._2_2_,*(short *)(param_3[5] + 4) - sVar7);
        FUN_110115c0(param_1);
        FUN_110021b0(param_1,*param_3,&local_c,&local_14,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar6 = timeGetTime();
        } while ((DVar6 * 6) / 100 < uVar8);
        local_20 = local_20 + 1;
      } while (local_20 <= local_1e);
    }
  }
  return;
}


