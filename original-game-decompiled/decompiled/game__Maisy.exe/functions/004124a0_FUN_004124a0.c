
/* ==== FUN_004124a0 @ 004124a0 ==== 
 * signature: undefined __fastcall FUN_004124a0(int * param_1)
 * body: 004124a0-004124ca
 */

void __fastcall FUN_004124a0(int *param_1)

{
  void *this;
  
  this = (void *)(**(code **)(*param_1 + 0x218))();
  if (this != (void *)0x0) {
    FUN_00423d80(this,param_1);
    return;
  }
  if (*(int **)((int)param_1 + 0x3a) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x3a) + 700))(param_1);
  }
  return;
}


