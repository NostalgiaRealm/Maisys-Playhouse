
/* ==== FUN_110120a0 @ 110120a0 ==== 
 * signature: undefined __cdecl FUN_110120a0(int param_1, int param_2)
 * body: 110120a0-11012106
 */

void __cdecl FUN_110120a0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  FUN_110025f0((short *)(param_2 + 0x24),(short *)(param_1 + 0x20));
  if (*(LPVOID *)(param_1 + 0x52) != (LPVOID)0x0) {
    FUN_1100d8f0(*(LPVOID *)(param_1 + 0x52));
  }
  if (*(LPVOID *)(param_1 + 0x4e) != (LPVOID)0x0) {
    FUN_1100d8f0(*(LPVOID *)(param_1 + 0x4e));
  }
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(param_2 + 0x56);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(param_2 + 0x52);
  return;
}


