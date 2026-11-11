
/* ==== FUN_00415790 @ 00415790 ==== 
 * signature: undefined __cdecl FUN_00415790(undefined4 param_1, int param_2, char param_3, char * param_4, undefined4 * param_5)
 * body: 00415790-004157be
 */

void __cdecl
FUN_00415790(undefined4 param_1,int param_2,char param_3,char *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)FUN_0048b560(0,param_2);
    piVar2 = (int *)*puVar1;
  }
  FUN_0048c070(piVar2,param_3,param_4,param_5);
  return;
}


