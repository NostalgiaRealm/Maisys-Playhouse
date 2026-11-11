
/* ==== FUN_10008edd @ 10008edd ==== 
 * signature: undefined __cdecl FUN_10008edd(int param_1, undefined4 * param_2, undefined2 param_3, short param_4)
 * body: 10008edd-10008f27
 */

void __cdecl FUN_10008edd(int param_1,undefined4 *param_2,undefined2 param_3,short param_4)

{
  if (*(short *)(param_1 + 0x22) <= param_4) {
    FUN_10008690((undefined4 *)(param_1 + 0x11),param_2);
    *(undefined2 *)(param_1 + 0xa8) = param_3;
    *(short *)(param_1 + 0x22) = param_4 + 1;
  }
  return;
}


