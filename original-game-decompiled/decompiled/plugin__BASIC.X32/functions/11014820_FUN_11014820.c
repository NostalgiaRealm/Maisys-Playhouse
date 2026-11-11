
/* ==== FUN_11014820 @ 11014820 ==== 
 * signature: undefined4 __cdecl FUN_11014820(undefined4 param_1, int param_2, int param_3)
 * body: 11014820-1101484a
 */

undefined4 __cdecl FUN_11014820(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_11013ee0(param_2);
  if ((((char)uVar1 != '\0') && (-1 < param_3)) && (param_3 < *(int *)(param_2 + 0x20))) {
    return *(undefined4 *)(*(int *)(param_2 + 0x28) + param_3 * 4);
  }
  return 0;
}


