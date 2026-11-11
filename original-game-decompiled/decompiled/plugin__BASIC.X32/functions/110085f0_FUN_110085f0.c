
/* ==== FUN_110085f0 @ 110085f0 ==== 
 * signature: undefined __cdecl FUN_110085f0(undefined2 * param_1, undefined2 * param_2, int param_3, int param_4, int param_5, uint param_6)
 * body: 110085f0-1100868a
 */

void __cdecl
FUN_110085f0(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,
            uint param_6)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  if (0 < param_5) {
    do {
      puVar1 = (undefined2 *)((int)param_1 + param_3);
      puVar4 = param_2;
      if ((param_6 & 1) != 0) {
        puVar4 = param_2 + 8;
        *param_2 = *param_1;
        param_1 = param_1 + 8;
      }
      puVar3 = param_1;
      puVar5 = puVar4;
      if ((param_6 & 2) != 0) {
        puVar5 = puVar4 + 0x10;
        *puVar4 = *param_1;
        puVar3 = param_1 + 0x10;
        puVar4[8] = param_1[8];
      }
      iVar2 = (int)param_6 >> 2;
      if (0 < (int)param_6 >> 2) {
        do {
          *puVar5 = *puVar3;
          iVar2 = iVar2 + -1;
          puVar5[8] = puVar3[8];
          puVar5[0x10] = puVar3[0x10];
          puVar5[0x18] = puVar3[0x18];
          puVar3 = puVar3 + 0x20;
          puVar5 = puVar5 + 0x20;
        } while (iVar2 != 0);
      }
      param_5 = param_5 + -1;
      param_1 = puVar1;
      param_2 = (undefined2 *)((int)param_2 + param_4);
    } while (param_5 != 0);
  }
  return;
}


