
/* ==== FUN_110183f0 @ 110183f0 ==== 
 * signature: undefined __cdecl FUN_110183f0(undefined4 * param_1, int param_2, short * param_3)
 * body: 110183f0-1101843d
 */

void __cdecl FUN_110183f0(undefined4 *param_1,int param_2,short *param_3)

{
  if (*param_3 == 0x16) {
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 7);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 5);
    return;
  }
  if (*param_3 == 0xd) {
    FUN_110182b0(param_1,*(char **)(param_3 + 2),(double *)(param_2 + 0x10),
                 (undefined4 *)(param_2 + 0x18));
  }
  return;
}


