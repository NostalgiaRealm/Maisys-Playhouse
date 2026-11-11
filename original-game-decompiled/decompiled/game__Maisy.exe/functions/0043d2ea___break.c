
/* ==== __break @ 0043d2ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d2ea-0043d2ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


