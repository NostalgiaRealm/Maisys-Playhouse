
/* ==== FUN_12016260 @ 12016260 ==== 
 * signature: undefined __fastcall FUN_12016260(int param_1)
 * body: 12016260-1201627d
 */

void __fastcall FUN_12016260(int param_1)

{
  if (*(UINT *)(param_1 + 0x12) != 0) {
    timeKillEvent(*(UINT *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


