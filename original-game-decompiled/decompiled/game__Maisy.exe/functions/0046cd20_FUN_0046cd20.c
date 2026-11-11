
/* ==== FUN_0046cd20 @ 0046cd20 ==== 
 * signature: undefined __fastcall FUN_0046cd20(int * param_1)
 * body: 0046cd20-0046cd67
 */

void __fastcall FUN_0046cd20(int *param_1)

{
  int iVar1;
  undefined4 local_58 [21];
  
  if (DAT_004dbdc4 == '\0') {
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x2cc))();
    (**(code **)(iVar1 + 0x314))(0);
    FUN_004142c0(local_58,3,0,param_1,0);
    FUN_0046b770(param_1,(int)local_58);
  }
  return;
}


