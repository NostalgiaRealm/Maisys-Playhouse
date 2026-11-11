
/* ==== FUN_11013e50 @ 11013e50 ==== 
 * signature: int __cdecl FUN_11013e50(undefined4 param_1, int param_2)
 * body: 11013e50-11013e5e
 */

int __cdecl FUN_11013e50(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  return param_2;
}


