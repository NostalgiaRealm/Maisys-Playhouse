
/* ==== FUN_004af6f1 @ 004af6f1 ==== 
 * signature: undefined4 __stdcall FUN_004af6f1(int * param_1)
 * body: 004af6f1-004af702
 */

int FUN_004af6f1(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = *piVar1;
  return piVar1[2];
}


