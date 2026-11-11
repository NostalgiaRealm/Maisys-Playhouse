
/* ==== __break @ 004107ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107ba-004107ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


