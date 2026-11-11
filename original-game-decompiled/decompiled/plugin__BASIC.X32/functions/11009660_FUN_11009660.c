
/* ==== FUN_11009660 @ 11009660 ==== 
 * signature: undefined __cdecl FUN_11009660(undefined1 * param_1, undefined4 * param_2, short * param_3, int param_4)
 * body: 11009660-110096b4
 */

void __cdecl FUN_11009660(undefined1 *param_1,undefined4 *param_2,short *param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (0 < param_4) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar3 = (uint)*param_3;
      param_3 = param_3 + 1;
      puVar4 = param_2;
      if (0 < (int)uVar3) {
        puVar4 = (undefined4 *)((int)param_2 + uVar3);
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_2 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          param_2 = param_2 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)param_2 = uVar1;
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
      }
      param_4 = param_4 + -1;
      param_2 = puVar4;
    } while (param_4 != 0);
  }
  return;
}


