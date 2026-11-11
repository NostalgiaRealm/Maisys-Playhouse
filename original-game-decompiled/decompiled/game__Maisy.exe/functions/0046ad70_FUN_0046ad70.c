
/* ==== FUN_0046ad70 @ 0046ad70 ==== 
 * signature: undefined __fastcall FUN_0046ad70(int * param_1)
 * body: 0046ad70-0046ade2
 */

void __fastcall FUN_0046ad70(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_58 [21];
  
  iVar1 = *param_1;
  uVar2 = *(uint *)((int)param_1 + 0x26) & 0x8000;
  (**(code **)(iVar1 + 0x140))(CONCAT31((int3)(uVar2 >> 8),'\x01' - (uVar2 == 0)));
  uVar2 = *(uint *)((int)param_1 + 0x26) & 0x10000;
  (**(code **)(iVar1 + 0x148))(CONCAT31((int3)(uVar2 >> 8),'\x01' - (uVar2 == 0)));
  FUN_0046da90(param_1,'\x01','\x01');
  (**(code **)(iVar1 + 0x2e8))();
  FUN_004142c0(local_58,0xdd,0,param_1,0);
  FUN_0046b770(param_1,(int)local_58);
  return;
}


