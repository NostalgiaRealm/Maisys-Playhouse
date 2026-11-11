
/* ==== __break @ 0047ac4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac4f-0047ac4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


