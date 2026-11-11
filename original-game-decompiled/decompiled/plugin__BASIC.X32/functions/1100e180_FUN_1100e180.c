
/* ==== FUN_1100e180 @ 1100e180 ==== 
 * signature: undefined __cdecl FUN_1100e180(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8, short param_9, int param_10, int param_11)
 * body: 1100e180-1100e2e8
 */

void __cdecl
FUN_1100e180(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,int param_8,short param_9,int param_10,int param_11)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_4;
  
  pbVar4 = (byte *)FUN_1100e2f0(param_1,param_2);
  pbVar5 = (byte *)FUN_1100e2f0(CONCAT22((short)((uint)pbVar4 >> 0x10),param_3),param_4);
  iVar7 = (int)param_9;
  local_4 = 0x100;
  pbVar6 = (byte *)(param_10 + 2);
  iVar11 = 0;
  do {
    bVar1 = *pbVar6;
    bVar2 = pbVar6[-1];
    iVar10 = iVar7 * (uint)bVar1;
    bVar3 = pbVar6[-2];
    *(int *)((int)&DAT_11037fb0 + iVar11) = iVar10;
    *(uint *)((int)&DAT_11038bb8 + iVar11) = (uint)bVar1 * 0x100 - iVar10;
    *(uint *)((int)&DAT_11037fb4 + iVar11) = iVar7 * (uint)bVar2;
    *(uint *)((int)&DAT_11038bbc + iVar11) = (0x100 - iVar7) * (uint)bVar2;
    iVar10 = iVar7 * (uint)bVar3;
    *(int *)((int)&DAT_11037fb8 + iVar11) = iVar10;
    local_4 = local_4 + -1;
    *(uint *)((int)&DAT_11038bc0 + iVar11) = (uint)bVar3 * 0x100 - iVar10;
    pbVar6 = pbVar6 + 4;
    iVar11 = iVar11 + 0xc;
  } while (local_4 != 0);
  while (param_6 != 0) {
    param_6 = param_6 + -1;
    pbVar6 = pbVar5;
    iVar11 = param_5;
    if (0 < param_5) {
      do {
        pbVar5 = pbVar6 + 1;
        uVar8 = (uint)*pbVar6;
        uVar9 = (uint)*pbVar4;
        if (uVar9 != uVar8) {
          *pbVar4 = *(byte *)(((((uint)((&DAT_11037fb8)[uVar8 * 3] + (&DAT_11038bc0)[uVar9 * 3]) >>
                                 4 | (&DAT_11037fb4)[uVar8 * 3] + (&DAT_11038bbc)[uVar9 * 3] &
                                     0xf000) >> 4 |
                               (&DAT_11037fb0)[uVar8 * 3] + (&DAT_11038bb8)[uVar9 * 3] & 0xf000) >>
                              4) + param_11);
        }
        pbVar4 = pbVar4 + 1;
        iVar11 = iVar11 + -1;
        pbVar6 = pbVar5;
      } while (iVar11 != 0);
    }
    pbVar4 = pbVar4 + (param_7 - param_5);
    pbVar5 = pbVar5 + (param_8 - param_5);
  }
  return;
}


