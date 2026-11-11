
/* ==== FUN_00418790 @ 00418790 ==== 
 * signature: undefined4 __fastcall FUN_00418790(int param_1)
 * body: 00418790-0041879f
 */

undefined4 __fastcall FUN_00418790(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x7e) & 0x80000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


