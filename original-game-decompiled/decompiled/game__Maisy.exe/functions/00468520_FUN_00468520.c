
/* ==== FUN_00468520 @ 00468520 ==== 
 * signature: undefined __fastcall FUN_00468520(int param_1)
 * body: 00468520-0046853d
 */

void __fastcall FUN_00468520(int param_1)

{
  if ((*(int *)(param_1 + 0x3a) != 0) && (*(int **)(param_1 + 0x42) != (int *)0x0)) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
    (**(code **)(**(int **)(param_1 + 0x42) + 0x78))(0xb,param_1,1);
  }
  return;
}


