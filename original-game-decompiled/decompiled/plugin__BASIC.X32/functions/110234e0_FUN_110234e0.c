
/* ==== FUN_110234e0 @ 110234e0 ==== 
 * signature: undefined __cdecl FUN_110234e0(undefined4 * param_1, int param_2, short * param_3)
 * body: 110234e0-11023517
 */

void __cdecl FUN_110234e0(undefined4 *param_1,int param_2,short *param_3)

{
  if (*param_3 == 0x10) {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 1);
    return;
  }
  if (*param_3 == 0xd) {
    FUN_11023440(param_1,*(char **)(param_3 + 2),(undefined2 *)(param_2 + 0x10));
  }
  return;
}


