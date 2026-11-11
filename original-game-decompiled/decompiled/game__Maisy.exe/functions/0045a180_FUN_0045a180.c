
/* ==== FUN_0045a180 @ 0045a180 ==== 
 * signature: undefined4 __fastcall FUN_0045a180(int param_1)
 * body: 0045a180-0045a18c
 */

undefined4 __fastcall FUN_0045a180(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x76) >> 8),
                  '\x01' - (*(short *)(*(int *)(param_1 + 0x76) + 0xc) == 0));
}


