
/* ==== __break @ 0043d3fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d3fb-0043d3fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


