
/* ==== FUN_12003650 @ 12003650 ==== 
 * signature: undefined __fastcall FUN_12003650(int param_1)
 * body: 12003650-1200366f
 */

void __fastcall FUN_12003650(int param_1)

{
  if (*(char *)(param_1 + 0x1a) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x6e) = 2;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x42);
    return;
  }
  FUN_12003670(param_1);
  return;
}


