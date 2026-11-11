
/* ==== FUN_11011db0 @ 11011db0 ==== 
 * signature: undefined __cdecl FUN_11011db0(undefined4 * param_1, int param_2, short * param_3)
 * body: 11011db0-11011df1
 */

void __cdecl FUN_11011db0(undefined4 *param_1,int param_2,short *param_3)

{
  if (*param_3 == 0x11) {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 3);
    return;
  }
  if (*param_3 == 0xd) {
    FUN_11011c90(param_1,*(char **)(param_3 + 2),(undefined4 *)(param_2 + 0x10),
                 (undefined4 *)(param_2 + 0x14));
  }
  return;
}


