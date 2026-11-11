
/* ==== FUN_120276c0 @ 120276c0 ==== 
 * signature: undefined __cdecl FUN_120276c0(int param_1, undefined4 * param_2, undefined2 param_3, short param_4)
 * body: 120276c0-120276f6
 */

void __cdecl FUN_120276c0(int param_1,undefined4 *param_2,undefined2 param_3,short param_4)

{
  if (*(short *)(param_1 + 0x22) <= param_4) {
    FUN_120271b0((undefined4 *)(param_1 + 0x11),param_2);
    *(undefined2 *)(param_1 + 0xa8) = param_3;
    *(short *)(param_1 + 0x22) = param_4 + 1;
  }
  return;
}


