
/* ==== __break @ 0043d10b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d10b-0043d10b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


