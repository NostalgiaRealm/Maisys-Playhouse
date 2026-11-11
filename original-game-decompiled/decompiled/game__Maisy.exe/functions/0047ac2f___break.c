
/* ==== __break @ 0047ac2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac2f-0047ac2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


