
/* ==== __break @ 0047ac3b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac3b-0047ac3b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


