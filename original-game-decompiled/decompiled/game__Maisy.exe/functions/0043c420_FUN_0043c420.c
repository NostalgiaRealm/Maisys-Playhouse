
/* ==== FUN_0043c420 @ 0043c420 ==== 
 * signature: undefined __stdcall FUN_0043c420(void)
 * body: 0043c420-0043c446
 */

void FUN_0043c420(void)

{
  DWORD DVar1;
  
  if (DAT_004db520 != 0) {
    DVar1 = timeGetTime();
    FUN_0048ea60(DVar1);
    DAT_004db520 = 0;
  }
  _rand();
  return;
}


