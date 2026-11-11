
/* ==== FUN_0041cab0 @ 0041cab0 ==== 
 * signature: undefined __fastcall FUN_0041cab0(int * param_1)
 * body: 0041cab0-0041cae1
 */

void __fastcall FUN_0041cab0(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 4) & 0x10) != 0) {
    (**(code **)(**(int **)((int)param_1 + 0x4e) + 0xe8))(param_1);
  }
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x80))(0x7fffffff,100);
  (**(code **)(iVar1 + 0x19c))();
  return;
}


