
/* ==== FUN_100085d0 @ 100085d0 ==== 
 * signature: undefined __cdecl FUN_100085d0(undefined4 * param_1, int param_2)
 * body: 100085d0-100085eb
 */

void __cdecl FUN_100085d0(undefined4 *param_1,int param_2)

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


