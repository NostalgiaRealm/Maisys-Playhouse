
/* ==== FUN_1001bc84 @ 1001bc84 ==== 
 * signature: undefined FUN_1001bc84(void)
 * body: 1001bc84-1001bca1
 */

void FUN_1001bc84(void)

{
  uint in_EAX;
  
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((&DAT_10025220)[(int)in_EAX >> 5] + 0xc + (in_EAX & 0x1f) * 0x24))
  ;
  return;
}


