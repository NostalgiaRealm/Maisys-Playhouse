
/* ==== FUN_1100ec50 @ 1100ec50 ==== 
 * signature: undefined __cdecl FUN_1100ec50(undefined4 * param_1, int param_2)
 * body: 1100ec50-1100ec6d
 */

void __cdecl FUN_1100ec50(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * param_2 * param_2;
  if (0 < iVar1) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0xffffffff;
      param_1 = param_1 + 1;
    }
  }
  return;
}


