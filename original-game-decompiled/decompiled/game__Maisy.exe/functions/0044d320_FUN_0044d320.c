
/* ==== FUN_0044d320 @ 0044d320 ==== 
 * signature: undefined __cdecl FUN_0044d320(int * param_1, int * param_2)
 * body: 0044d320-0044d339
 */

void __cdecl FUN_0044d320(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x84))();
  if (iVar1 != 0) {
    *param_2 = *param_2 + 1;
  }
  return;
}


