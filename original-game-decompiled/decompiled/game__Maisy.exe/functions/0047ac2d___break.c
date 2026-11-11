
/* ==== __break @ 0047ac2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac2d-0047ac2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


