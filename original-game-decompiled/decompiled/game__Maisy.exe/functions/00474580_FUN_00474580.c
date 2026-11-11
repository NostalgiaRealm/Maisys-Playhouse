
/* ==== FUN_00474580 @ 00474580 ==== 
 * signature: undefined __fastcall FUN_00474580(void * param_1)
 * body: 00474580-004745a9
 */

void __fastcall FUN_00474580(void *param_1)

{
  FUN_0046c640(param_1,'\0');
  if ((*(short *)((int)param_1 + 0x46) == 2) && (*(int *)((int)param_1 + 0x52) != 0)) {
    (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x25c))();
    *(undefined2 *)((int)param_1 + 0x46) = 3;
  }
  return;
}


