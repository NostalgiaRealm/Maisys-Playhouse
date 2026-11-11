
/* ==== __break @ 0049863d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049863d-0049863d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


