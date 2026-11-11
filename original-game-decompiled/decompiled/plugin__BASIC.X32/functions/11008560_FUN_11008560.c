
/* ==== FUN_11008560 @ 11008560 ==== 
 * signature: undefined __cdecl FUN_11008560(undefined1 * param_1, undefined1 * param_2, int param_3, int param_4, int param_5, uint param_6)
 * body: 11008560-110085e8
 */

void __cdecl
FUN_11008560(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4,int param_5,
            uint param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  if (0 < param_5) {
    do {
      puVar1 = param_1 + param_3;
      puVar5 = param_2;
      if ((param_6 & 1) != 0) {
        uVar2 = *param_1;
        puVar5 = param_2 + 8;
        param_1 = param_1 + 8;
        *param_2 = uVar2;
      }
      puVar4 = param_1;
      puVar6 = puVar5;
      if ((param_6 & 2) != 0) {
        puVar6 = puVar5 + 0x10;
        puVar4 = param_1 + 0x10;
        *puVar5 = *param_1;
        puVar5[8] = param_1[8];
      }
      iVar3 = (int)param_6 >> 2;
      if (0 < (int)param_6 >> 2) {
        do {
          iVar3 = iVar3 + -1;
          *puVar6 = *puVar4;
          puVar6[8] = puVar4[8];
          puVar6[0x10] = puVar4[0x10];
          puVar6[0x18] = puVar4[0x18];
          puVar4 = puVar4 + 0x20;
          puVar6 = puVar6 + 0x20;
        } while (iVar3 != 0);
      }
      param_5 = param_5 + -1;
      param_1 = puVar1;
      param_2 = param_2 + param_4;
    } while (param_5 != 0);
  }
  return;
}


