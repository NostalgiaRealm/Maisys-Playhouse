
/* ==== FUN_004301f0 @ 004301f0 ==== 
 * signature: undefined __fastcall FUN_004301f0(int param_1)
 * body: 004301f0-0043021f
 */

void __fastcall FUN_004301f0(int param_1)

{
  if (*(HLOCAL *)(param_1 + 0x36) != (HLOCAL)0x0) {
    if (0 < *(short *)(param_1 + 0x46)) {
      *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + -1;
    }
    if (*(short *)(param_1 + 0x46) == 0) {
      LocalUnlock(*(HLOCAL *)(param_1 + 0x36));
      *(undefined4 *)(param_1 + 0x3a) = 0;
    }
  }
  return;
}


