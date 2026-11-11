
/* ==== FUN_00465e70 @ 00465e70 ==== 
 * signature: undefined __cdecl FUN_00465e70(undefined1 * param_1, undefined1 * param_2, short * param_3, int param_4)
 * body: 00465e70-00465eb6
 */

void __cdecl FUN_00465e70(undefined1 *param_1,undefined1 *param_2,short *param_3,int param_4)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  while (0 < param_4) {
    sVar2 = param_3[1];
    iVar3 = (int)*param_3;
    iVar4 = param_4 - iVar3;
    if (0 < iVar3) {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = uVar1;
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1 = param_1 + sVar2;
    param_3 = param_3 + 2;
    param_4 = iVar4 - sVar2;
  }
  return;
}


