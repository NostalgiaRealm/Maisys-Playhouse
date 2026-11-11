
/* ==== FUN_00415820 @ 00415820 ==== 
 * signature: undefined4 __cdecl FUN_00415820(undefined4 param_1, int param_2, int param_3, char * param_4)
 * body: 00415820-00415850
 */

undefined4 __cdecl FUN_00415820(undefined4 param_1,int param_2,int param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)FUN_0048b560(0,param_2);
    uVar2 = FUN_0048c660((int *)*puVar1,param_3,param_4);
    return uVar2;
  }
  return 0x10000;
}


