
/* ==== FUN_11001dc0 @ 11001dc0 ==== 
 * signature: undefined __cdecl FUN_11001dc0(undefined4 * param_1, undefined4 param_2, int param_3)
 * body: 11001dc0-11001e03
 */

void __cdecl FUN_11001dc0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if ((*(short *)(param_3 + 0x28) == 1) || (*(short *)(param_3 + 0x28) == 6)) {
    FUN_11014cf0(param_1,(undefined4 *)(param_3 + 0x2a));
  }
  if (*(short *)(param_3 + 0x38) == 0x1c) {
    FUN_11014cf0(param_1,(undefined4 *)(param_3 + 0x3e));
  }
  return;
}


