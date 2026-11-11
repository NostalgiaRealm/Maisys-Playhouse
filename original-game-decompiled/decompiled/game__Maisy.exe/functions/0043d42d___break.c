
/* ==== __break @ 0043d42d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d42d-0043d42d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


