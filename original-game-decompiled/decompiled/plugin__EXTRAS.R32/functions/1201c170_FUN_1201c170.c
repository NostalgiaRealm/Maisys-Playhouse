
/* ==== FUN_1201c170 @ 1201c170 ==== 
 * signature: undefined4 __cdecl FUN_1201c170(undefined2 * param_1)
 * body: 1201c170-1201c220
 */

undefined4 __cdecl FUN_1201c170(undefined2 *param_1)

{
  byte bVar1;
  
  *param_1 = 0x17;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[10] = 0x17;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 1;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined4 *)(param_1 + 1) = 0x7d1;
  *(undefined4 *)(param_1 + 6) = 0x7d2;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xc9;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x47] = 1;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0x15) = 5;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  param_1[0x12] = 100;
  bVar1 = *(byte *)(param_1 + 0x5d);
  *(byte *)(param_1 + 0x5d) = bVar1 & 0xfe;
  *(byte *)(param_1 + 0x5d) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x4a] = 0;
  *(byte *)(param_1 + 0x5d) = bVar1 & 0xf4;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(byte *)(param_1 + 0x5d) = bVar1 & 0xe4;
  return 0;
}


