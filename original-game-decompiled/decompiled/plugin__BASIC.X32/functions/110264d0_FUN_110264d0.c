
/* ==== FUN_110264d0 @ 110264d0 ==== 
 * signature: undefined __cdecl FUN_110264d0(undefined2 * param_1, undefined2 * param_2, short * param_3, int param_4)
 * body: 110264d0-11026514
 */

void __cdecl FUN_110264d0(undefined2 *param_1,undefined2 *param_2,short *param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  while (0 < param_4) {
    sVar1 = param_3[1];
    iVar4 = (int)*param_3;
    param_3 = param_3 + 2;
    iVar3 = param_4 - iVar4;
    if (0 < iVar4) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = uVar2;
        param_2 = param_2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1 = param_1 + sVar1;
    param_4 = iVar3 - sVar1;
  }
  return;
}


