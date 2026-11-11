
/* ==== FUN_00474550 @ 00474550 ==== 
 * signature: undefined __fastcall FUN_00474550(void * param_1)
 * body: 00474550-00474579
 */

void __fastcall FUN_00474550(void *param_1)

{
  FUN_0046c640(param_1,'\x01');
  if ((*(short *)((int)param_1 + 0x46) == 3) && (*(int *)((int)param_1 + 0x52) != 0)) {
    (**(code **)(**(int **)((int)param_1 + 0x5a) + 600))();
    *(undefined2 *)((int)param_1 + 0x46) = 2;
  }
  return;
}


