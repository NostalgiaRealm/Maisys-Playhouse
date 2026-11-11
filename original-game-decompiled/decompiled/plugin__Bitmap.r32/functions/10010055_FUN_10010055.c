
/* ==== FUN_10010055 @ 10010055 ==== 
 * signature: undefined FUN_10010055(void)
 * body: 10010055-1001005f
 */

void FUN_10010055(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10018400)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


