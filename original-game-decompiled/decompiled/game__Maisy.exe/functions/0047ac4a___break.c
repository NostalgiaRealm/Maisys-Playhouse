
/* ==== __break @ 0047ac4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac4a-0047ac4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


