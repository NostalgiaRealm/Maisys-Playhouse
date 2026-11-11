
/* ==== FUN_00468f30 @ 00468f30 ==== 
 * signature: undefined __cdecl FUN_00468f30(undefined2 * param_1, undefined2 * param_2, short * param_3, int param_4)
 * body: 00468f30-00468f7e
 */

void __cdecl FUN_00468f30(undefined2 *param_1,undefined2 *param_2,short *param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  while (0 < param_4) {
    sVar1 = param_3[1];
    iVar3 = (int)*param_3;
    iVar4 = param_4 - iVar3;
    if (0 < iVar3) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = uVar2;
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1 = param_1 + sVar1;
    param_3 = param_3 + 2;
    param_4 = iVar4 - sVar1;
  }
  return;
}


