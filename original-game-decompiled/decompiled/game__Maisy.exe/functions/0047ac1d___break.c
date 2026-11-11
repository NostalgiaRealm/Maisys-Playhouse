
/* ==== __break @ 0047ac1d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac1d-0047ac1d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


