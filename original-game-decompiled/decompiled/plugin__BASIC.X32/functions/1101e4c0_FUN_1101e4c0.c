
/* ==== FUN_1101e4c0 @ 1101e4c0 ==== 
 * signature: undefined __cdecl FUN_1101e4c0(undefined4 * param_1, int param_2, undefined2 * param_3)
 * body: 1101e4c0-1101e52a
 */

void __cdecl FUN_1101e4c0(undefined4 *param_1,int param_2,undefined2 *param_3)

{
  longlong lVar1;
  undefined1 local_8 [8];
  
  FUN_11011150(param_1,param_2 + 2,local_8);
  lVar1 = __ftol();
  *param_3 = (short)lVar1;
  FUN_11011110(param_1,param_2 + 2,local_8);
  lVar1 = __ftol();
  param_3[1] = -(short)lVar1;
  return;
}


