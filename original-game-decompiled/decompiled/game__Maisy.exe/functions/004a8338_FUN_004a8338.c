
/* ==== FUN_004a8338 @ 004a8338 ==== 
 * signature: undefined __cdecl FUN_004a8338(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 004a8338-004a835f
 */

void __cdecl
FUN_004a8338(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x5c))
              (param_2,param_3,param_4,param_5,param_6,&stack0x0000001c);
  }
  return;
}


