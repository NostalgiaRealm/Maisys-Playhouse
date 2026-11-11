
/* ==== FUN_10007550 @ 10007550 ==== 
 * signature: undefined4 __cdecl FUN_10007550(undefined4 * param_1, int * param_2)
 * body: 10007550-10007579
 */

undefined4 __cdecl FUN_10007550(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 != 0) {
    uVar1 = FUN_10007c20(0);
    *param_1 = uVar1;
    FUN_10007d10(param_1,(HGLOBAL)*param_2);
  }
  return 0;
}


