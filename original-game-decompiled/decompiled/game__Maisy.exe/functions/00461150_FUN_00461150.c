
/* ==== FUN_00461150 @ 00461150 ==== 
 * signature: undefined __cdecl FUN_00461150(int * param_1)
 * body: 00461150-00461166
 */

void __cdecl FUN_00461150(int *param_1)

{
  if ((*(byte *)((int)param_1 + 0x1e) & 4) != 0) {
    (**(code **)(*param_1 + 0x3ec))();
  }
  return;
}


