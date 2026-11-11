
/* ==== FUN_00452010 @ 00452010 ==== 
 * signature: undefined __cdecl FUN_00452010(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8, short param_9, int param_10, int param_11)
 * body: 00452010-0045216c
 */

void __cdecl
FUN_00452010(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,int param_8,short param_9,int param_10,int param_11)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_18;
  uint local_c;
  byte *local_8;
  
  pbVar3 = (byte *)FUN_00452170(param_1,param_2);
  pbVar4 = (byte *)FUN_00452170(CONCAT22((short)((uint)pbVar3 >> 0x10),param_3),param_4);
  iVar6 = (int)param_9;
  local_8 = (byte *)(param_10 + 2);
  local_18 = 0x100;
  iVar10 = 0;
  do {
    bVar1 = *local_8;
    bVar2 = local_8[-1];
    local_c = (uint)local_8[-2];
    local_8 = local_8 + 4;
    iVar8 = iVar6 * (uint)bVar1;
    *(int *)((int)&DAT_004e03b8 + iVar10) = iVar8;
    *(uint *)((int)&DAT_004e0fc0 + iVar10) = (uint)bVar1 * 0x100 - iVar8;
    *(uint *)((int)&DAT_004e03bc + iVar10) = iVar6 * (uint)bVar2;
    *(uint *)((int)&DAT_004e0fc4 + iVar10) = (uint)bVar2 * (0x100 - iVar6);
    *(uint *)((int)&DAT_004e03c0 + iVar10) = iVar6 * local_c;
    *(uint *)((int)&DAT_004e0fc8 + iVar10) = local_c * 0x100 - iVar6 * local_c;
    local_18 = local_18 + -1;
    iVar10 = iVar10 + 0xc;
  } while (local_18 != 0);
  while (param_6 != 0) {
    param_6 = param_6 + -1;
    local_8 = (byte *)param_5;
    pbVar5 = pbVar4;
    if (0 < param_5) {
      do {
        pbVar4 = pbVar5 + 1;
        uVar9 = (uint)*pbVar5;
        uVar7 = (uint)*pbVar3;
        if (uVar7 != uVar9) {
          *pbVar3 = *(byte *)(((((uint)((&DAT_004e0fc8)[uVar7 * 3] + (&DAT_004e03c0)[uVar9 * 3]) >>
                                 4 | (&DAT_004e0fc4)[uVar7 * 3] + (&DAT_004e03bc)[uVar9 * 3] &
                                     0xf000) >> 4 |
                               (&DAT_004e0fc0)[uVar7 * 3] + (&DAT_004e03b8)[uVar9 * 3] & 0xf000) >>
                              4) + param_11);
        }
        pbVar3 = pbVar3 + 1;
        local_8 = (byte *)((int)local_8 + -1);
        pbVar5 = pbVar4;
      } while (local_8 != (byte *)0x0);
    }
    pbVar3 = pbVar3 + (param_7 - param_5);
    pbVar4 = pbVar4 + (param_8 - param_5);
  }
  return;
}


