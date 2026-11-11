
/* ==== __break @ 0043d01a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d01a-0043d01a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


