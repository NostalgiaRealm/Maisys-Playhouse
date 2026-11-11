
/* ==== FUN_00436e90 @ 00436e90 ==== 
 * signature: undefined __stdcall FUN_00436e90(int param_1)
 * body: 00436e90-00436eb8
 */

void FUN_00436e90(int param_1)

{
  *(short *)(DAT_004dae3c + 0x723a) = *(short *)(DAT_004dae3c + 0x723a) + 1;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_00434990(*(int *)(param_1 + 0x11c));
  }
  return;
}


