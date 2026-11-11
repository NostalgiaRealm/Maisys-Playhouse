
/* ==== FUN_11008720 @ 11008720 ==== 
 * signature: undefined4 __cdecl FUN_11008720(undefined4 * param_1, undefined4 * param_2, uint param_3, uint param_4, int param_5, int param_6, undefined4 param_7, int param_8, undefined4 * param_9, int param_10, int param_11, undefined4 * param_12, undefined4 param_13)
 * body: 11008720-11008a92
 */

uint __cdecl
FUN_11008720(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5,
            int param_6,undefined4 param_7,int param_8,undefined4 *param_9,int param_10,int param_11
            ,undefined4 *param_12,undefined4 param_13)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  uint uVar6;
  DWORD DVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int local_14;
  byte local_10;
  
  if (param_10 != param_11) {
    return param_10 & 0xffffff00;
  }
  if (param_10 == 0x18) {
    return 0;
  }
  iVar2 = FUN_11008aa0(param_4);
  iVar3 = FUN_11008aa0(param_3);
  uVar10 = 1;
  local_10 = (byte)iVar3;
  uVar1 = *(uint *)(&DAT_11036078 + (iVar3 + iVar2) * 4);
  uVar4 = (1 << (local_10 & 0x1f)) - 1;
  local_14 = (int)(param_4 * param_3) >> 5;
  if (local_14 < 1) {
    local_14 = 1;
  }
  GdiFlush();
  if (param_11 == 8) {
    do {
      DVar5 = timeGetTime();
      iVar2 = 0;
      if (0 < local_14) {
        do {
          uVar6 = uVar10 >> (local_10 & 0x1f);
          uVar9 = uVar10 & uVar4;
          if (((int)uVar6 < (int)param_4) && ((int)uVar9 < (int)param_3)) {
            *(undefined1 *)(param_6 * uVar6 + uVar9 + (int)param_2) =
                 *(undefined1 *)(param_5 * uVar6 + uVar9 + (int)param_1);
          }
          if ((uVar10 & 1) == 0) {
            uVar10 = uVar10 >> 1;
          }
          else {
            uVar10 = uVar10 >> 1 ^ uVar1;
          }
        } while ((uVar10 != 1) && (iVar2 = iVar2 + 1, iVar2 < local_14));
      }
      FUN_110115c0(param_12);
      FUN_11008530(param_12,param_9,param_6,param_13);
      if (uVar10 == 1) break;
      do {
        DVar7 = timeGetTime();
      } while ((DVar7 * 6) / 100 < (DVar5 * 6) / 100 + param_8);
    } while (uVar10 != 1);
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
  }
  else if (param_11 == 0x10) {
    do {
      DVar5 = timeGetTime();
      iVar2 = 0;
      if (0 < local_14) {
        do {
          uVar6 = uVar10 >> (local_10 & 0x1f);
          uVar9 = uVar10 & uVar4;
          if (((int)uVar6 < (int)param_4) && ((int)uVar9 < (int)param_3)) {
            *(undefined2 *)(param_6 * uVar6 + uVar9 * 2 + (int)param_2) =
                 *(undefined2 *)(param_5 * uVar6 + uVar9 * 2 + (int)param_1);
          }
          if ((uVar10 & 1) == 0) {
            uVar10 = uVar10 >> 1;
          }
          else {
            uVar10 = uVar10 >> 1 ^ uVar1;
          }
        } while ((uVar10 != 1) && (iVar2 = iVar2 + 1, iVar2 < local_14));
      }
      FUN_110115c0(param_12);
      FUN_11008530(param_12,param_9,param_6,param_13);
      if (uVar10 == 1) break;
      do {
        DVar7 = timeGetTime();
      } while ((DVar7 * 6) / 100 < (DVar5 * 6) / 100 + param_8);
    } while (uVar10 != 1);
    *(undefined2 *)param_2 = *(undefined2 *)param_1;
  }
  else if (param_11 == 0x20) {
    do {
      DVar5 = timeGetTime();
      iVar2 = 0;
      if (0 < local_14) {
        do {
          uVar6 = uVar10 >> (local_10 & 0x1f);
          uVar9 = uVar10 & uVar4;
          if (((int)uVar6 < (int)param_4) && ((int)uVar9 < (int)param_3)) {
            *(undefined4 *)(param_6 * uVar6 + uVar9 * 4 + (int)param_2) =
                 *(undefined4 *)(param_5 * uVar6 + uVar9 * 4 + (int)param_1);
          }
          if ((uVar10 & 1) == 0) {
            uVar10 = uVar10 >> 1;
          }
          else {
            uVar10 = uVar10 >> 1 ^ uVar1;
          }
        } while ((uVar10 != 1) && (iVar2 = iVar2 + 1, iVar2 < local_14));
      }
      FUN_110115c0(param_12);
      FUN_11008530(param_12,param_9,param_6,param_13);
      if (uVar10 == 1) break;
      do {
        DVar7 = timeGetTime();
      } while ((DVar7 * 6) / 100 < (DVar5 * 6) / 100 + param_8);
    } while (uVar10 != 1);
    *param_2 = *param_1;
  }
  FUN_110115c0(param_12);
  uVar8 = FUN_11008530(param_12,param_9,param_6,param_13);
  return CONCAT31((int3)((uint)uVar8 >> 8),1);
}


