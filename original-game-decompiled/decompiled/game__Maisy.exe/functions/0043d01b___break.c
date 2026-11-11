
/* ==== __break @ 0043d01b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d01b-0043d01b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


