
/* ==== FUN_00462ca0 @ 00462ca0 ==== 
 * signature: undefined __fastcall FUN_00462ca0(int * param_1)
 * body: 00462ca0-00462d09
 */

void __fastcall FUN_00462ca0(int *param_1)

{
  uint uVar1;
  undefined4 local_58 [21];
  
  uVar1 = *(uint *)((int)param_1 + 0x26) & 0x40000000;
  (**(code **)(*param_1 + 0x358))(CONCAT31((int3)(uVar1 >> 8),uVar1 == 0),1);
  FUN_0046c6d0((int)param_1);
  if (((*(int *)((int)param_1 + 0x4e) != 0) && ((*(byte *)((int)param_1 + 0x29) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x27) & 2) != 0)) {
    FUN_004142c0(local_58,0xc9,0,param_1,0);
    FUN_0046b770(param_1,(int)local_58);
  }
  return;
}


