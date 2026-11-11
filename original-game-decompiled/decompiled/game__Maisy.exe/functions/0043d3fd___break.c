
/* ==== __break @ 0043d3fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d3fd-0043d3fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


