
/* ==== FUN_120043ed @ 120043ed ==== 
 * signature: undefined __stdcall FUN_120043ed(void)
 * body: 120043ed-120043fb
 */

void FUN_120043ed(void)

{
  code *pcVar1;
  int in_EAX;
  
  iRam05050505 = iRam05050505 + in_EAX + 0xf0f0f0f;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


