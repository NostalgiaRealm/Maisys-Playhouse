
/* ==== __break @ 0047ac3a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac3a-0047ac3a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


