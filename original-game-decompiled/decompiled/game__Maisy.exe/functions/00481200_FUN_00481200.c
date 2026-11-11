
/* ==== FUN_00481200 @ 00481200 ==== 
 * signature: undefined __fastcall FUN_00481200(int param_1)
 * body: 00481200-0048122c
 */

void __fastcall FUN_00481200(int param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xef;
  if (*(int **)(param_1 + 0x168) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x168) + 4))();
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  FUN_0045b700((int *)(param_1 + 0x16c));
  return;
}


