
/* ==== FUN_00481500 @ 00481500 ==== 
 * signature: undefined4 __fastcall FUN_00481500(int param_1)
 * body: 00481500-0048150c
 */

undefined4 __fastcall FUN_00481500(int param_1)

{
  *(byte *)(param_1 + 0x15a) = *(byte *)(param_1 + 0x15a) & 0xfd;
  return 0x10000;
}


