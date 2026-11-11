
/* ==== FUN_0040ff10 @ 0040ff10 ==== 
 * signature: undefined4 __fastcall FUN_0040ff10(int param_1)
 * body: 0040ff10-0040ff37
 */

undefined4 __fastcall FUN_0040ff10(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    uVar1 = FUN_0043f0f0(1);
    *(uint *)(param_1 + 0xcc) = uVar1 & 0xff;
  }
  return *(undefined4 *)(param_1 + 0xcc);
}


