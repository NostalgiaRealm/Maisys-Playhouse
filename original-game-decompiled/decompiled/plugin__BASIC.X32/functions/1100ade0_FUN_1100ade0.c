
/* ==== FUN_1100ade0 @ 1100ade0 ==== 
 * signature: undefined __cdecl FUN_1100ade0(int param_1, int param_2)
 * body: 1100ade0-1100ae43
 */

void __cdecl FUN_1100ade0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  FUN_110025f0((short *)(param_2 + 0x24),(short *)(param_1 + 0x20));
  FUN_110025f0((short *)(param_2 + 0x52),(short *)(param_1 + 0x4e));
  if (*(LPVOID *)(param_1 + 0x7c) != (LPVOID)0x0) {
    FUN_1100d8f0(*(LPVOID *)(param_1 + 0x7c));
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x80);
  return;
}


