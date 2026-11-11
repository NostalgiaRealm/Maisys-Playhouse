
/* ==== FUN_1000e0a0 @ 1000e0a0 ==== 
 * signature: undefined __cdecl FUN_1000e0a0(uint * param_1, uint * param_2)
 * body: 1000e0a0-1000e107
 */

void __cdecl FUN_1000e0a0(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000e070(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000e070(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000e070(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000e070(param_1[2],param_2[2],param_1 + 2);
  return;
}


