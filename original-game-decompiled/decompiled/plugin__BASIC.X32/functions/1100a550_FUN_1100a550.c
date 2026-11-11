
/* ==== FUN_1100a550 @ 1100a550 ==== 
 * signature: undefined __cdecl FUN_1100a550(undefined4 * param_1, undefined4 param_2, int param_3)
 * body: 1100a550-1100a593
 */

void __cdecl FUN_1100a550(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if ((*(short *)(param_3 + 0x20) == 1) || (*(short *)(param_3 + 0x20) == 6)) {
    FUN_11014cf0(param_1,(undefined4 *)(param_3 + 0x22));
  }
  if (*(short *)(param_3 + 0x30) == 0x1c) {
    FUN_11014cf0(param_1,(undefined4 *)(param_3 + 0x36));
  }
  return;
}


