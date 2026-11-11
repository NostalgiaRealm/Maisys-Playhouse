
/* ==== FUN_004035b0 @ 004035b0 ==== 
 * signature: undefined __fastcall FUN_004035b0(int param_1)
 * body: 004035b0-00403635
 */

void __fastcall FUN_004035b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_38 [10];
  int *local_10 [2];
  undefined4 local_8;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x82) + 0x26);
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      iVar4 = iVar3 + 1;
      FUN_00430370(*(void **)(param_1 + 0x82),iVar3,local_10);
      local_38[0] = local_8;
      (**(code **)(*local_10[0] + 0x214))(local_38,0);
      uVar5 = 1;
      uVar2 = FUN_00458a00(*(int *)(param_1 + 0x2a));
      (**(code **)(*local_10[0] + 0x1c8))(uVar2,uVar5);
      (**(code **)(*local_10[0] + 0x19c))();
      iVar3 = iVar4;
    } while (iVar4 <= iVar1);
  }
  FUN_0042fc00(*(void **)(param_1 + 0x82));
  FUN_004442e0();
  return;
}


