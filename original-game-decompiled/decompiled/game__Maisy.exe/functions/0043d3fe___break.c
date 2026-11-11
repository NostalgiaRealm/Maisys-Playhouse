
/* ==== __break @ 0043d3fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d3fe-0043d3fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


