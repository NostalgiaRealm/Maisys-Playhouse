
/* ==== __break @ 0043d20d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d20d-0043d20d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


