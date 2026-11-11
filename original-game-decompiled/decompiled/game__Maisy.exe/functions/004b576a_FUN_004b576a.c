
/* ==== FUN_004b576a @ 004b576a ==== 
 * signature: undefined4 __stdcall FUN_004b576a(int * param_1)
 * body: 004b576a-004b577b
 */

int FUN_004b576a(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = *piVar1;
  return piVar1[2];
}


