
/* ==== FUN_1101ddb0 @ 1101ddb0 ==== 
 * signature: undefined __cdecl FUN_1101ddb0(int param_1, undefined4 * param_2)
 * body: 1101ddb0-1101dde7
 */

void __cdecl FUN_1101ddb0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xe) = *param_2;
  *(undefined4 *)(param_1 + 0x12) = param_2[1];
  *(undefined4 *)(param_1 + 0x16) = param_2[2];
  *(undefined4 *)(param_1 + 0x1a) = param_2[3];
  *(undefined2 *)(param_1 + 0x6e) = *(undefined2 *)((int)param_2 + 0x3e);
  FUN_110025f0((short *)(param_2 + 4),(short *)(param_1 + 0x1e));
  return;
}


