
/* ==== FUN_00436e30 @ 00436e30 ==== 
 * signature: undefined __stdcall FUN_00436e30(void)
 * body: 00436e30-00436e64
 */

void FUN_00436e30(void)

{
  *(short *)(DAT_004dae3c + 0x723a) = *(short *)(DAT_004dae3c + 0x723a) + -1;
  if ((*(int *)(DAT_004dae3c + 0x725c) != 0) && (*(short *)(DAT_004dae3c + 0x723a) == 0)) {
    FUN_00434990(*(int *)(DAT_004dae3c + 0x725c));
  }
  return;
}


