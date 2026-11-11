
/* ==== __break @ 0043d2eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d2eb-0043d2eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


