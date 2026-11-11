
/* ==== FUN_1001bc80 @ 1001bc80 ==== 
 * signature: undefined __stdcall FUN_1001bc80(uint param_1)
 * body: 1001bc80-1001bc80
 */

void FUN_1001bc80(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10025220)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


