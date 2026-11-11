
/* ==== FUN_004442e0 @ 004442e0 ==== 
 * signature: undefined __stdcall FUN_004442e0(void)
 * body: 004442e0-00444317
 */

void FUN_004442e0(void)

{
  if (DAT_004db5a0 != '\0') {
    DAT_004db87c = 0;
    waveOutReset(DAT_004db846);
    FUN_00443670();
    DAT_004db5a0 = '\0';
    waveOutClose(DAT_004db846);
  }
  return;
}


