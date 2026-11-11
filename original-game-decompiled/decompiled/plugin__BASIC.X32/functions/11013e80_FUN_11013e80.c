
/* ==== FUN_11013e80 @ 11013e80 ==== 
 * signature: undefined __cdecl FUN_11013e80(undefined4 * param_1, int param_2)
 * body: 11013e80-11013ede
 */

void __cdecl FUN_11013e80(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_110028a0(param_1,*(int *)(param_2 + 0xc));
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_110028a0(param_1,*(int *)(param_2 + 0x18));
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
    if (*(int *)(param_2 + 0x24) != 0) {
      FUN_110028a0(param_1,*(int *)(param_2 + 0x24));
      *(undefined4 *)(param_2 + 0x28) = 0;
    }
  }
  return;
}


