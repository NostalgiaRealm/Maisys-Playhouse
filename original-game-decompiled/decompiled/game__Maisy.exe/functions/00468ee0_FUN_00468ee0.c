
/* ==== FUN_00468ee0 @ 00468ee0 ==== 
 * signature: undefined __cdecl FUN_00468ee0(undefined2 * param_1, undefined4 * param_2, short * param_3, int param_4)
 * body: 00468ee0-00468f2c
 */

void __cdecl FUN_00468ee0(undefined2 *param_1,undefined4 *param_2,short *param_3,int param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (0 < param_4) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar4 = (uint)*param_3;
      puVar3 = param_2;
      if (0 < (int)uVar4) {
        puVar3 = (undefined4 *)((int)param_2 + uVar4 * 2);
        for (uVar2 = uVar4 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_2 = CONCAT22(uVar1,uVar1);
          param_2 = param_2 + 1;
        }
        for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined2 *)param_2 = uVar1;
          param_2 = (undefined4 *)((int)param_2 + 2);
        }
      }
      param_4 = param_4 + -1;
      param_2 = puVar3;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}


