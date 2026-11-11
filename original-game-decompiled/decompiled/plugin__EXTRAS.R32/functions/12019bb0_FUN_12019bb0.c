
/* ==== FUN_12019bb0 @ 12019bb0 ==== 
 * signature: undefined __cdecl FUN_12019bb0(int param_1, short * param_2, short * param_3)
 * body: 12019bb0-12019bf9
 */

void __cdecl FUN_12019bb0(int param_1,short *param_2,short *param_3)

{
  if ((param_2 != (short *)0x0) && (*param_2 == 1)) {
    if (*(uint *)(param_2 + 1) != 0) {
      FUN_12019c00(param_1,*(uint *)(param_2 + 1),param_3);
      return;
    }
    FUN_12019ca0(param_1,param_3);
    return;
  }
  FUN_12019e10(param_1,param_3);
  return;
}


