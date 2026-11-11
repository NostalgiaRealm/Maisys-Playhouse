
/* ==== FUN_11015a80 @ 11015a80 ==== 
 * signature: int __cdecl FUN_11015a80(int param_1, short * param_2, int param_3, int param_4, int param_5)
 * body: 11015a80-11015ab5
 */

int __cdecl FUN_11015a80(int param_1,short *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_1 + param_2[1] * param_3 + *param_2 * param_5;
  if (0 < param_4) {
    iVar1 = iVar1 + (1 - param_4) * param_3;
  }
  return iVar1;
}


