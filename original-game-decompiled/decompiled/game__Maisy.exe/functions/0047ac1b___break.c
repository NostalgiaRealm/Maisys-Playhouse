
/* ==== __break @ 0047ac1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac1b-0047ac1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


