
/* ==== FUN_00418370 @ 00418370 ==== 
 * signature: int __stdcall FUN_00418370(int param_1, int param_2)
 * body: 00418370-00418389
 */

int FUN_00418370(int param_1,int param_2)

{
  if (param_2 != 0) {
    return *(int *)(param_2 + -4 + param_1 * 4);
  }
  return param_1;
}


