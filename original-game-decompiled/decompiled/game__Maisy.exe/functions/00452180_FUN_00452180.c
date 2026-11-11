
/* ==== FUN_00452180 @ 00452180 ==== 
 * signature: undefined __cdecl FUN_00452180(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8, short param_9)
 * body: 00452180-00452289
 */

void __cdecl
FUN_00452180(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,int param_8,short param_9)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined2 extraout_var;
  uint uVar5;
  uint uVar6;
  int local_14;
  ushort *local_8;
  
  iVar1 = (int)param_9;
  iVar2 = 0x100 - iVar1;
  local_8 = (ushort *)FUN_00452170(param_1,param_2);
  puVar3 = (ushort *)FUN_00452170(CONCAT22(extraout_var,param_3),param_4);
  while (param_6 != 0) {
    param_6 = param_6 + -1;
    local_14 = param_5;
    puVar4 = puVar3;
    if (0 < param_5) {
      do {
        puVar3 = puVar4 + 1;
        uVar5 = (uint)*puVar4;
        uVar6 = (uint)*local_8;
        if (uVar6 != uVar5) {
          *local_8 = (ushort)((uVar6 & 0x3e0) * iVar2 + (uVar5 & 0x3e0) * iVar1 >> 8) & 0x3e0 |
                     (ushort)((uVar5 & 0x7c00) * iVar1 + (uVar6 & 0x7c00) * iVar2 >> 8) & 0x7c00 |
                     (ushort)((*local_8 & 0x1f) * iVar2 + (*puVar4 & 0x1f) * iVar1 >> 8);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + -1;
        puVar4 = puVar3;
      } while (local_14 != 0);
    }
    puVar3 = (ushort *)((int)puVar3 + param_8 + param_5 * -2);
    local_8 = (ushort *)((int)local_8 + param_7 + param_5 * -2);
  }
  return;
}


