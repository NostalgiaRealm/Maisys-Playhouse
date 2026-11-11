
/* ==== FUN_00486c10 @ 00486c10 ==== 
 * signature: undefined __fastcall FUN_00486c10(int param_1)
 * body: 00486c10-00486c2f
 */

void __fastcall FUN_00486c10(int param_1)

{
  if (*(int *)(param_1 + 0x15c) != 0) {
    _lclose(*(int *)(param_1 + 0x15c));
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  return;
}


