
/* ==== FUN_11017a00 @ 11017a00 ==== 
 * signature: undefined __cdecl FUN_11017a00(undefined4 * param_1, undefined4 param_2, int param_3)
 * body: 11017a00-11017a43
 */

void __cdecl FUN_11017a00(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if ((*(short *)(param_3 + 0x24) == 1) || (*(short *)(param_3 + 0x24) == 6)) {
    FUN_11014cf0(param_1,(undefined4 *)(param_3 + 0x26));
  }
  if (*(short *)(param_3 + 0x34) == 0x1c) {
    FUN_11014cf0(param_1,(undefined4 *)(param_3 + 0x3a));
  }
  return;
}


