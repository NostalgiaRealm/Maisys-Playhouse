
/* ==== FUN_004845e0 @ 004845e0 ==== 
 * signature: undefined4 __cdecl FUN_004845e0(undefined4 param_1, int * param_2, undefined2 * param_3, undefined2 * param_4)
 * body: 004845e0-0048463d
 */

undefined4 __cdecl
FUN_004845e0(undefined4 param_1,int *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 local_c;
  undefined2 local_a;
  
  if (((param_2 != (int *)0x0) && (param_3 != (undefined2 *)0x0)) && (param_4 != (undefined2 *)0x0))
  {
    if ((*(byte *)((int)param_2 + 0x1e) & 4) != 0) {
      (**(code **)(*param_2 + 0x3a0))(&local_c,0);
      *param_3 = local_c;
      *param_4 = local_a;
      return 0;
    }
    return 0x9000a;
  }
  return 0x10001;
}


