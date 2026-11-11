
/* ==== FUN_00418830 @ 00418830 ==== 
 * signature: undefined4 __fastcall FUN_00418830(int param_1)
 * body: 00418830-00418842
 */

undefined4 __fastcall FUN_00418830(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14a) & 0x8000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


