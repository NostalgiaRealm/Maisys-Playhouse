
/* ==== FUN_12021850 @ 12021850 ==== 
 * signature: undefined4 __cdecl FUN_12021850(undefined2 * param_1)
 * body: 12021850-1202188b
 */

undefined4 __cdecl FUN_12021850(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12f;
  *(undefined4 *)(param_1 + 6) = 0x130;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 0xb) = 0x2715;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  param_1[10] = 100;
  return 0;
}


