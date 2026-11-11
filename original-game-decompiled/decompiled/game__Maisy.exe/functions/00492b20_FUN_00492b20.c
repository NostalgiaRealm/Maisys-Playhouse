
/* ==== FUN_00492b20 @ 00492b20 ==== 
 * signature: int __cdecl FUN_00492b20(byte * param_1)
 * body: 00492b20-00492b37
 */

int __cdecl FUN_00492b20(byte *param_1)

{
  return 2 - (uint)((*(byte *)((int)&DAT_004de1f0 + *param_1 + 1) & 4) == 0);
}


