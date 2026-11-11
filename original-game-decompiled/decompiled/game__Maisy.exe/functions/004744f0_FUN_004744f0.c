
/* ==== FUN_004744f0 @ 004744f0 ==== 
 * signature: undefined __fastcall FUN_004744f0(void * param_1)
 * body: 004744f0-0047452e
 */

void __fastcall FUN_004744f0(void *param_1)

{
  undefined4 local_58 [21];
  
  FUN_0046c6d0((int)param_1);
  if ((*(int *)((int)param_1 + 0x4e) != 0) && ((*(byte *)((int)param_1 + 0x29) & 1) == 0)) {
    FUN_004142c0(local_58,0xc9,0,param_1,0);
    FUN_0046b770(param_1,(int)local_58);
  }
  return;
}


