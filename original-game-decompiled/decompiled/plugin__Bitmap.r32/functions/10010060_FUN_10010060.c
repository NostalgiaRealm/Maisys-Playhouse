
/* ==== FUN_10010060 @ 10010060 ==== 
 * signature: undefined __stdcall FUN_10010060(uint param_1)
 * body: 10010060-10010060
 */

void FUN_10010060(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10018400)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


