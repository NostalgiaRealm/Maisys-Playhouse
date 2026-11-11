
/* ==== FUN_14009590 @ 14009590 ==== 
 * signature: undefined __stdcall FUN_14009590(void)
 * body: 14009590-140095ab
 */

void FUN_14009590(void)

{
  if (DAT_14026404 != (code *)0x0) {
    (*DAT_14026404)();
  }
  if (DAT_140263fc != (HMODULE)0x0) {
    FreeLibrary(DAT_140263fc);
  }
  return;
}


