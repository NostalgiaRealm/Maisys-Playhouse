
/* ==== FUN_1100c170 @ 1100c170 ==== 
 * signature: undefined __cdecl FUN_1100c170(int param_1, int param_2)
 * body: 1100c170-1100c1c4
 */

void __cdecl FUN_1100c170(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x26);
  if (*(LPVOID *)(param_1 + 0x20) != (LPVOID)0x0) {
    FUN_11029180(*(LPVOID *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return;
}


