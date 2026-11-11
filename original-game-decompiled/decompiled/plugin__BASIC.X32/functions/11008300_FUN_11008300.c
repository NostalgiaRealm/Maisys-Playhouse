
/* ==== FUN_11008300 @ 11008300 ==== 
 * signature: undefined4 __cdecl FUN_11008300(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, undefined4 * param_9, int param_10, int param_11, undefined4 * param_12, undefined4 param_13)
 * body: 11008300-11008527
 */

int __cdecl
FUN_11008300(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,undefined4 *param_9,int param_10,int param_11,undefined4 *param_12,
            undefined4 param_13)

{
  uint3 uVar3;
  int iVar1;
  DWORD DVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_14;
  int local_10;
  uint local_8;
  
  GdiFlush();
  uVar3 = (uint3)((uint)param_11 >> 8);
  if (param_11 != param_10) {
    return (uint)uVar3 << 8;
  }
  if (param_10 != 0x18) {
    if ((param_7 == 0) || (0x40 < param_7)) {
      param_7 = 0x40;
    }
    iVar1 = (int)(0x40 / (longlong)param_7);
    DVar2 = timeGetTime();
    local_8 = (DVar2 * 6) / 100 + param_8;
    local_10 = 0;
    local_14 = iVar1;
    do {
      iVar5 = (int)(uint)(byte)(&DAT_11036038)[local_10] >> 4;
      uVar4 = (byte)(&DAT_11036038)[local_10] & 7;
      iVar6 = (param_4 - iVar5) + 7 >> 3;
      uVar7 = (int)((param_3 - uVar4) + 7) >> 3;
      if (param_10 == 8) {
        FUN_11008560((undefined1 *)(param_1 + param_5 * iVar5 + uVar4),
                     (undefined1 *)(param_2 + param_6 * iVar5 + uVar4),param_5 << 3,param_6 * 8,
                     iVar6,uVar7);
      }
      else if (param_10 == 0x10) {
        FUN_110085f0((undefined2 *)(param_1 + param_5 * iVar5 + uVar4 * 2),
                     (undefined2 *)(param_6 * iVar5 + uVar4 * 2 + param_2),param_5 << 3,param_6 * 8,
                     iVar6,uVar7);
      }
      else if (param_10 == 0x20) {
        FUN_11008690((undefined4 *)(param_1 + param_5 * iVar5 + uVar4 * 4),
                     (undefined4 *)(param_6 * iVar5 + uVar4 * 4 + param_2),param_5 << 3,param_6 * 8,
                     iVar6,uVar7);
      }
      local_14 = local_14 + -1;
      if (local_14 < 1) {
        FUN_110115c0(param_12);
        FUN_11008530(param_12,param_9,param_6,param_13);
        local_14 = iVar1;
        if (0 < param_8) {
          do {
            DVar2 = timeGetTime();
          } while ((DVar2 * 6) / 100 < local_8);
          DVar2 = timeGetTime();
          local_8 = (DVar2 * 6) / 100 + param_8;
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < 0x40);
    if (local_14 != iVar1) {
      FUN_110115c0(param_12);
      local_14 = FUN_11008530(param_12,param_9,param_6,param_13);
    }
    return CONCAT31((int3)((uint)local_14 >> 8),1);
  }
  return (uint)uVar3 << 8;
}


