
/* ==== FUN_004b055c @ 004b055c ==== 
 * signature: undefined __stdcall FUN_004b055c(int * param_1, int param_2)
 * body: 004b055c-004b0584
 */

void FUN_004b055c(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x54))();
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}


