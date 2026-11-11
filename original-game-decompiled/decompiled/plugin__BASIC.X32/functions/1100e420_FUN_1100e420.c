
/* ==== FUN_1100e420 @ 1100e420 ==== 
 * signature: undefined __cdecl FUN_1100e420(undefined4 param_1, undefined4 param_2, undefined2 param_3, undefined4 param_4, int param_5, int param_6, int param_7, int param_8, short param_9)
 * body: 1100e420-1100e4f7
 */

void __cdecl
FUN_1100e420(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,int param_8,short param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int local_4;
  
  iVar3 = (int)param_9;
  puVar4 = (uint *)FUN_1100e2f0(param_1,param_2);
  puVar5 = (uint *)FUN_1100e2f0(CONCAT22((short)((uint)puVar4 >> 0x10),param_3),param_4);
  while (param_6 != 0) {
    param_6 = param_6 + -1;
    local_4 = param_5;
    if (0 < param_5) {
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        uVar2 = *puVar4;
        if (uVar2 != uVar1) {
          *puVar4 = ((uVar2 & 0xff00) * (0x100 - iVar3) + (uVar1 & 0xff00) * iVar3 & 0xff0000 |
                    (uVar2 & 0xff00ff) * (0x100 - iVar3) + (uVar1 & 0xff00ff) * iVar3 & 0xff00ffff)
                    >> 8;
        }
        puVar4 = puVar4 + 1;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    puVar4 = (uint *)((int)puVar4 + param_7 + param_5 * -4);
    puVar5 = (uint *)((int)puVar5 + param_8 + param_5 * -4);
  }
  return;
}


