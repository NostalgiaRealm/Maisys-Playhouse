
/* ==== FUN_14008e00 @ 14008e00 ==== 
 * signature: undefined __cdecl FUN_14008e00(int param_1, undefined4 * param_2, undefined2 param_3, short param_4)
 * body: 14008e00-14008e36
 */

void __cdecl FUN_14008e00(int param_1,undefined4 *param_2,undefined2 param_3,short param_4)

{
  if (*(short *)(param_1 + 0x22) <= param_4) {
    FUN_140088f0((undefined4 *)(param_1 + 0x11),param_2);
    *(undefined2 *)(param_1 + 0xa8) = param_3;
    *(short *)(param_1 + 0x22) = param_4 + 1;
  }
  return;
}


