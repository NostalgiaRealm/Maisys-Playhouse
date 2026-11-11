
/* ==== FUN_00418870 @ 00418870 ==== 
 * signature: undefined4 __fastcall FUN_00418870(int param_1)
 * body: 00418870-00418882
 */

undefined4 __fastcall FUN_00418870(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14a) & 0x80000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


