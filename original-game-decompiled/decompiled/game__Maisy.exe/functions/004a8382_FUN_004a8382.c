
/* ==== FUN_004a8382 @ 004a8382 ==== 
 * signature: undefined __cdecl FUN_004a8382(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 004a8382-004a83a0
 */

void __cdecl FUN_004a8382(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x60))(param_2,param_3,&stack0x00000010);
  }
  return;
}


