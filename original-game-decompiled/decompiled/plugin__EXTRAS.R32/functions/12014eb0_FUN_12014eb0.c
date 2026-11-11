
/* ==== FUN_12014eb0 @ 12014eb0 ==== 
 * signature: undefined4 __cdecl FUN_12014eb0(int param_1, undefined2 * param_2)
 * body: 12014eb0-12014ec9
 */

undefined4 __cdecl FUN_12014eb0(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  *param_2 = 1;
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_2 + 1) = iVar1;
  *(int *)(param_2 + 1) = iVar1 + 1;
  return 0;
}


