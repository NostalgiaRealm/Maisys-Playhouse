
/* ==== FUN_00447960 @ 00447960 ==== 
 * signature: undefined __fastcall FUN_00447960(void * param_1)
 * body: 00447960-004479a9
 */

void __fastcall FUN_00447960(void *param_1)

{
  undefined4 local_58 [21];
  
  FUN_0042ea70(*(int **)((int)param_1 + 0x5a));
  if ((*(int *)((int)param_1 + 0x3a) != 0) &&
     (*(char *)(*(int *)((int)param_1 + 0x3a) + 0xa4) != '\0')) {
    FUN_004142c0(local_58,0xdc,0,param_1,0);
    FUN_0046b770(param_1,(int)local_58);
  }
  return;
}


