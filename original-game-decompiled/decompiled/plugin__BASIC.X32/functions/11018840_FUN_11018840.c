
/* ==== FUN_11018840 @ 11018840 ==== 
 * signature: undefined __cdecl FUN_11018840(int param_1, undefined4 * param_2)
 * body: 11018840-11018893
 */

void __cdecl FUN_11018840(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = param_2[3];
  *(undefined4 *)(param_1 + 0x1c) = param_2[4];
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)((int)param_2 + 0x16);
  if (*(LPVOID *)(param_1 + 0x20) != (LPVOID)0x0) {
    FUN_11029180(*(LPVOID *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = param_2[6];
  *(undefined4 *)(param_1 + 0x24) = param_2[7];
  *(undefined4 *)(param_1 + 0x46) = param_2[9];
  return;
}


