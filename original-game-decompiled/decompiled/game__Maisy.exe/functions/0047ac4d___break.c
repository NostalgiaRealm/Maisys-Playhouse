
/* ==== __break @ 0047ac4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac4d-0047ac4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


