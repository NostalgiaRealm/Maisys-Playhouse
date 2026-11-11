
/* ==== FUN_1101ca20 @ 1101ca20 ==== 
 * signature: undefined __cdecl FUN_1101ca20(undefined4 param_1, undefined2 * param_2, undefined4 param_3)
 * body: 1101ca20-1101ca3f
 */

void __cdecl FUN_1101ca20(undefined4 param_1,undefined2 *param_2,undefined4 param_3)

{
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0xffe3;
    *(undefined4 *)(param_2 + 1) = param_3;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)(param_2 + 7) = 0;
  }
  return;
}


