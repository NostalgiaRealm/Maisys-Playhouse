
/* ==== FUN_0040e900 @ 0040e900 ==== 
 * signature: undefined __cdecl FUN_0040e900(undefined4 * param_1, undefined4 * param_2, short * param_3, int param_4)
 * body: 0040e900-0040e938
 */

void __cdecl FUN_0040e900(undefined4 *param_1,undefined4 *param_2,short *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (0 < param_4) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar3 = (int)*param_3;
      iVar2 = iVar3;
      puVar4 = param_2;
      if (0 < iVar3) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        param_2 = param_2 + iVar3;
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}


