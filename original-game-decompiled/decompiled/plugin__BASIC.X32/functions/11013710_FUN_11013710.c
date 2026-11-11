
/* ==== FUN_11013710 @ 11013710 ==== 
 * signature: undefined __cdecl FUN_11013710(undefined4 * param_1, int param_2, int * param_3)
 * body: 11013710-11013bcb
 */

void __cdecl FUN_11013710(undefined4 *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  DWORD DVar4;
  short sVar5;
  uint uVar6;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short sStack_1a;
  short local_18;
  short sStack_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_1e = *(short *)(param_2 + 0x22);
  local_4 = *(int *)(param_2 + 0x24) / 100000;
  uVar1 = *(undefined4 *)param_3[7];
  uVar2 = ((undefined4 *)param_3[7])[1];
  if ((*(byte *)(param_3 + 8) & 2) != 0) {
    FUN_11023060(param_1,*(undefined4 *)((int)param_3 + 0x22));
  }
  local_18 = (short)uVar2;
  local_1c = (short)uVar1;
  sStack_1a = (short)((uint)uVar1 >> 0x10);
  sStack_16 = (short)((uint)uVar2 >> 0x10);
  local_14 = uVar1;
  local_10 = uVar2;
  switch(*(undefined2 *)(param_2 + 0x1e)) {
  case 900:
    local_22 = sStack_16;
    if (local_1e == 0) {
      uVar3 = (ushort)((int)sStack_16 - (int)sStack_1a >> 0x1f);
      local_1e = ((ushort)((int)sStack_16 - (int)sStack_1a) ^ uVar3) - uVar3;
    }
    local_20 = 1;
    if (0 < local_1e) {
      local_8 = (int)local_1e;
      local_c = (int)sStack_1a - (int)sStack_16;
      do {
        DVar4 = timeGetTime();
        uVar6 = local_4 + (DVar4 * 6) / 100;
        sVar5 = sStack_16 + (short)((local_20 * local_c) / local_8);
        local_14 = CONCAT22(sVar5,(undefined2)local_14);
        local_10 = CONCAT22(local_22,(undefined2)local_10);
        FUN_110115c0(param_1);
        FUN_110021b0(param_1,*param_3,&local_14,&local_14,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar4 = timeGetTime();
        } while ((DVar4 * 6) / 100 < uVar6);
        local_20 = local_20 + 1;
        local_22 = sVar5;
      } while (local_20 <= local_1e);
      return;
    }
    break;
  case 0x385:
    local_22 = sStack_1a;
    if (local_1e == 0) {
      uVar3 = (ushort)((int)sStack_1a - (int)sStack_16 >> 0x1f);
      local_1e = ((ushort)((int)sStack_1a - (int)sStack_16) ^ uVar3) - uVar3;
    }
    local_20 = 1;
    if (0 < local_1e) {
      local_8 = (int)local_1e;
      local_c = (int)sStack_16 - (int)sStack_1a;
      do {
        DVar4 = timeGetTime();
        uVar6 = local_4 + (DVar4 * 6) / 100;
        sVar5 = sStack_1a + (short)((local_20 * local_c) / local_8);
        local_14 = CONCAT22(local_22,(undefined2)local_14);
        local_10 = CONCAT22(sVar5,(undefined2)local_10);
        FUN_110115c0(param_1);
        FUN_110021b0(param_1,*param_3,&local_14,&local_14,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar4 = timeGetTime();
        } while ((DVar4 * 6) / 100 < uVar6);
        local_20 = local_20 + 1;
        local_22 = sVar5;
      } while (local_20 <= local_1e);
      return;
    }
    break;
  case 0x386:
    local_22 = local_18;
    if (local_1e == 0) {
      uVar3 = (ushort)((int)local_18 - (int)local_1c >> 0x1f);
      local_1e = ((ushort)((int)local_18 - (int)local_1c) ^ uVar3) - uVar3;
    }
    local_20 = 1;
    if (0 < local_1e) {
      local_8 = (int)local_1e;
      local_c = (int)local_1c - (int)local_18;
      do {
        DVar4 = timeGetTime();
        uVar6 = local_4 + (DVar4 * 6) / 100;
        sVar5 = local_18 + (short)((local_20 * local_c) / local_8);
        local_14 = CONCAT22(local_14._2_2_,sVar5);
        local_10 = CONCAT22(local_10._2_2_,local_22);
        FUN_110115c0(param_1);
        FUN_110021b0(param_1,*param_3,&local_14,&local_14,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar4 = timeGetTime();
        } while ((DVar4 * 6) / 100 < uVar6);
        local_20 = local_20 + 1;
        local_22 = sVar5;
      } while (local_20 <= local_1e);
      return;
    }
    break;
  case 0x387:
    local_22 = local_1c;
    if (local_1e == 0) {
      uVar3 = (ushort)((int)local_1c - (int)local_18 >> 0x1f);
      local_1e = ((ushort)((int)local_1c - (int)local_18) ^ uVar3) - uVar3;
    }
    local_20 = 1;
    if (0 < local_1e) {
      local_8 = (int)local_1e;
      local_c = (int)local_18 - (int)local_1c;
      do {
        DVar4 = timeGetTime();
        uVar6 = local_4 + (DVar4 * 6) / 100;
        sVar5 = local_1c + (short)((local_20 * local_c) / local_8);
        local_14 = CONCAT22(local_14._2_2_,local_22);
        local_10 = CONCAT22(local_10._2_2_,sVar5);
        FUN_110115c0(param_1);
        FUN_110021b0(param_1,*param_3,&local_14,&local_14,*(undefined4 *)((int)param_3 + 0x2a),
                     *(undefined4 *)((int)param_3 + 0x32));
        GdiFlush();
        do {
          DVar4 = timeGetTime();
        } while ((DVar4 * 6) / 100 < uVar6);
        local_20 = local_20 + 1;
        local_22 = sVar5;
      } while (local_20 <= local_1e);
    }
    break;
  default:
    FUN_11012930(param_1,param_2,param_3);
    return;
  }
  return;
}


