
/* ==== FUN_004281b0 @ 004281b0 ==== 
 * signature: undefined __fastcall FUN_004281b0(int param_1)
 * body: 004281b0-00428202
 */

void __fastcall FUN_004281b0(int param_1)

{
  if (((*(HGLOBAL *)(param_1 + 0xb8) != (HGLOBAL)0x0) &&
      (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xf2))) && (*(int *)(param_1 + 0xee) != 0)) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xef;
    *(undefined4 *)(param_1 + 0xee) = 0;
    *(undefined4 *)(param_1 + 0xf2) = 0;
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0xb8));
    *(undefined1 *)(param_1 + 0xf9) = 1;
  }
  FUN_0040dfd0();
  return;
}


