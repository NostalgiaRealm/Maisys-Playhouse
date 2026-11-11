
/* ==== FUN_0046adf0 @ 0046adf0 ==== 
 * signature: undefined __fastcall FUN_0046adf0(int * param_1)
 * body: 0046adf0-0046ae20
 */

void __fastcall FUN_0046adf0(int *param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    (**(code **)(*param_1 + 0x298))();
    for (piVar1 = (int *)FUN_00469fb0(param_1); piVar1 != (int *)0x0;
        piVar1 = *(int **)((int)piVar1 + 0x6a)) {
      (**(code **)(*piVar1 + 0x230))();
    }
  }
  return;
}


