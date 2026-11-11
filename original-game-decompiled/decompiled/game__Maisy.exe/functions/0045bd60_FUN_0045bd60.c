
/* ==== FUN_0045bd60 @ 0045bd60 ==== 
 * signature: undefined4 __cdecl FUN_0045bd60(undefined4 param_1, int * param_2, undefined4 * param_3)
 * body: 0045bd60-0045bd89
 */

undefined4 __cdecl FUN_0045bd60(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != (int *)0x0) && (param_3 != (undefined4 *)0x0)) {
    uVar1 = (**(code **)(*param_2 + 0x150))();
    *param_3 = uVar1;
    return 0;
  }
  return 0x10001;
}


