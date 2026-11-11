
/* ==== FUN_1001bc75 @ 1001bc75 ==== 
 * signature: undefined FUN_1001bc75(void)
 * body: 1001bc75-1001bc7f
 */

void FUN_1001bc75(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10025220)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}


