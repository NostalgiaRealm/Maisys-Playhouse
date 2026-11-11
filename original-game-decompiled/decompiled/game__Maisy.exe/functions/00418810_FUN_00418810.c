
/* ==== FUN_00418810 @ 00418810 ==== 
 * signature: undefined4 __fastcall FUN_00418810(int param_1)
 * body: 00418810-00418822
 */

undefined4 __fastcall FUN_00418810(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14a) & 0x20000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


