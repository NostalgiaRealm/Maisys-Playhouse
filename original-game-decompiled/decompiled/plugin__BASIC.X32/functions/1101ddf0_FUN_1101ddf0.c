
/* ==== FUN_1101ddf0 @ 1101ddf0 ==== 
 * signature: undefined __cdecl FUN_1101ddf0(int param_1, undefined4 * param_2)
 * body: 1101ddf0-1101de27
 */

void __cdecl FUN_1101ddf0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xe);
  param_2[1] = *(undefined4 *)(param_1 + 0x12);
  param_2[2] = *(undefined4 *)(param_1 + 0x16);
  param_2[3] = *(undefined4 *)(param_1 + 0x1a);
  *(undefined2 *)((int)param_2 + 0x3e) = *(undefined2 *)(param_1 + 0x6e);
  FUN_11002670((short *)(param_1 + 0x1e),(short *)(param_2 + 4));
  return;
}


