
/* ==== __break @ 0043d10a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d10a-0043d10a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


