
/* ==== FUN_120241ad @ 120241ad ==== 
 * signature: undefined __stdcall FUN_120241ad(void)
 * body: 120241ad-120241af
 */

void FUN_120241ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x40);
  (*pcVar1)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


