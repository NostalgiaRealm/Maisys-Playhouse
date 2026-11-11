
/* ==== __break @ 0043d42a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d42a-0043d42a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


