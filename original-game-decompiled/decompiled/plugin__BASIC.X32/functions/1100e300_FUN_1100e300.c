
/* ==== FUN_1100e300 @ 1100e300 ==== 
 * signature: undefined __cdecl FUN_1100e300(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8, short param_9)
 * body: 1100e300-1100e416
 */

void __cdecl
FUN_1100e300(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,int param_8,short param_9)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int local_4;
  
  iVar1 = (int)param_9;
  iVar2 = 0x100 - iVar1;
  puVar3 = (ushort *)FUN_1100e2f0(param_1,param_2);
  puVar4 = (ushort *)FUN_1100e2f0(CONCAT22((short)((uint)puVar3 >> 0x10),param_3),param_4);
  while (param_6 != 0) {
    param_6 = param_6 + -1;
    local_4 = param_5;
    puVar5 = puVar4;
    if (0 < param_5) {
      do {
        puVar4 = puVar5 + 1;
        uVar6 = (uint)*puVar5;
        uVar7 = (uint)*puVar3;
        if (uVar6 != uVar7) {
          *puVar3 = (ushort)((uVar7 & 0x7c00) * iVar2 + (uVar6 & 0x7c00) * iVar1 >> 8) & 0x7c00 |
                    (ushort)((uVar7 & 0x3e0) * iVar2 + (uVar6 & 0x3e0) * iVar1 >> 8) & 0x3e0 |
                    (ushort)((*puVar3 & 0x1f) * iVar2 + (*puVar5 & 0x1f) * iVar1 >> 8);
        }
        puVar3 = puVar3 + 1;
        local_4 = local_4 + -1;
        puVar5 = puVar4;
      } while (local_4 != 0);
    }
    puVar3 = (ushort *)((int)puVar3 + param_7 + param_5 * -2);
    puVar4 = (ushort *)((int)puVar4 + param_8 + param_5 * -2);
  }
  return;
}


