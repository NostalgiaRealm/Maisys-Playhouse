
/* ==== FUN_0040d910 @ 0040d910 ==== 
 * signature: undefined __cdecl FUN_0040d910(int * param_1)
 * body: 0040d910-0040d926
 */

void __cdecl FUN_0040d910(int *param_1)

{
  if ((*(byte *)((int)param_1 + 0x1e) & 1) != 0) {
    (**(code **)(*param_1 + 0x168))();
  }
  return;
}


