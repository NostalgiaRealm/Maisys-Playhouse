
/* ==== FUN_11008690 @ 11008690 ==== 
 * signature: undefined __cdecl FUN_11008690(undefined4 * param_1, undefined4 * param_2, int param_3, int param_4, int param_5, uint param_6)
 * body: 11008690-1100871e
 */

void __cdecl
FUN_11008690(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
            uint param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (0 < param_5) {
    do {
      puVar1 = (undefined4 *)((int)param_1 + param_3);
      puVar4 = param_2;
      if ((param_6 & 1) != 0) {
        uVar2 = *param_1;
        puVar4 = param_2 + 8;
        param_1 = param_1 + 8;
        *param_2 = uVar2;
      }
      puVar5 = puVar4;
      puVar6 = param_1;
      if ((param_6 & 2) != 0) {
        puVar5 = puVar4 + 0x10;
        puVar6 = param_1 + 0x10;
        *puVar4 = *param_1;
        puVar4[8] = param_1[8];
      }
      iVar3 = (int)param_6 >> 2;
      if (0 < (int)param_6 >> 2) {
        do {
          iVar3 = iVar3 + -1;
          *puVar5 = *puVar6;
          puVar5[8] = puVar6[8];
          puVar5[0x10] = puVar6[0x10];
          puVar5[0x18] = puVar6[0x18];
          puVar5 = puVar5 + 0x20;
          puVar6 = puVar6 + 0x20;
        } while (iVar3 != 0);
      }
      param_5 = param_5 + -1;
      param_1 = puVar1;
      param_2 = (undefined4 *)((int)param_2 + param_4);
    } while (param_5 != 0);
  }
  return;
}


