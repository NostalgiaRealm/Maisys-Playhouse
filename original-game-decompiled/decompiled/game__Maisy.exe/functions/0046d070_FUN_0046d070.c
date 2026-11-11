
/* ==== FUN_0046d070 @ 0046d070 ==== 
 * signature: undefined __fastcall FUN_0046d070(int * param_1)
 * body: 0046d070-0046d09e
 */

void __fastcall FUN_0046d070(int *param_1)

{
  int *piVar1;
  
  if (*(int **)((int)param_1 + 0x4e) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x4e) + 0x7c))();
  }
  for (piVar1 = (int *)FUN_00469fb0(param_1); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x6a)) {
    (**(code **)(*piVar1 + 0x30c))();
  }
  return;
}


