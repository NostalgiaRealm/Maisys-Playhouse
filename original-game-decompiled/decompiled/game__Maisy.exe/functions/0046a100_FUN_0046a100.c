
/* ==== FUN_0046a100 @ 0046a100 ==== 
 * signature: undefined __fastcall FUN_0046a100(void * param_1)
 * body: 0046a100-0046a144
 */

void __fastcall FUN_0046a100(void *param_1)

{
  undefined4 local_58 [21];
  
  (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x224))();
  if (*(int *)((int)param_1 + 0x72) != 0) {
    FUN_004142c0(local_58,*(int *)((int)param_1 + 0x72),*(undefined4 *)((int)param_1 + 0x76),param_1
                 ,0);
    FUN_0046b770(param_1,(int)local_58);
    *(undefined4 *)((int)param_1 + 0x76) = 0;
  }
  return;
}


