
/* ==== __break @ 0043d3f6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d3f6-0043d3f6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


