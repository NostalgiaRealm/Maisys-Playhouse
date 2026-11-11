
/* ==== FUN_11003cc0 @ 11003cc0 ==== 
 * signature: undefined __cdecl FUN_11003cc0(undefined4 * param_1, int param_2)
 * body: 11003cc0-11003d12
 */

void __cdecl FUN_11003cc0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  short local_10;
  short local_e;
  
  uVar1 = FUN_1100fc30((int)param_1);
  FUN_1100fc50(param_1,uVar1,&local_30);
  *(undefined4 *)(param_2 + 0x20) = local_2c;
  *(undefined4 *)(param_2 + 0x24) = local_28;
  FUN_11028c90((short *)(param_2 + 0x20),-local_10,-local_e);
  return;
}


