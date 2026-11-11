
/* ==== FUN_00484cb0 @ 00484cb0 ==== 
 * signature: undefined __cdecl FUN_00484cb0(undefined2 * param_1, int param_2)
 * body: 00484cb0-00484ce5
 */

void __cdecl FUN_00484cb0(undefined2 *param_1,int param_2)

{
  *param_1 = 0x10;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x12);
  return;
}


