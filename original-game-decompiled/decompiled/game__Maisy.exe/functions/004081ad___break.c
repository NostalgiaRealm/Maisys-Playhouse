
/* ==== __break @ 004081ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004081ad-004081ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


