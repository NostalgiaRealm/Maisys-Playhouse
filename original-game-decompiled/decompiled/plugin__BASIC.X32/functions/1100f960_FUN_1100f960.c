
/* ==== FUN_1100f960 @ 1100f960 ==== 
 * signature: undefined __cdecl FUN_1100f960(int param_1, int param_2)
 * body: 1100f960-1100f988
 */

void __cdecl FUN_1100f960(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_1 + 0x1c);
  return;
}


