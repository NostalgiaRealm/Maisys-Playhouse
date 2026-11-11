
/* ==== FUN_110096c0 @ 110096c0 ==== 
 * signature: undefined __cdecl FUN_110096c0(undefined1 * param_1, undefined1 * param_2, short * param_3, int param_4)
 * body: 110096c0-110096fd
 */

void __cdecl FUN_110096c0(undefined1 *param_1,undefined1 *param_2,short *param_3,int param_4)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  while (0 < param_4) {
    sVar2 = param_3[1];
    iVar4 = (int)*param_3;
    param_3 = param_3 + 2;
    iVar3 = param_4 - iVar4;
    if (0 < iVar4) {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = uVar1;
        param_2 = param_2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1 = param_1 + sVar2;
    param_4 = iVar3 - sVar2;
  }
  return;
}


