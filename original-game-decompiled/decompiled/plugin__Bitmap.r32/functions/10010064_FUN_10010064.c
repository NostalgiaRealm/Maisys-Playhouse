
/* ==== FUN_10010064 @ 10010064 ==== 
 * signature: undefined FUN_10010064(void)
 * body: 10010064-10010081
 */

void FUN_10010064(void)

{
  uint in_EAX;
  
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((&DAT_10018400)[(int)in_EAX >> 5] + 0xc + (in_EAX & 0x1f) * 0x24))
  ;
  return;
}


