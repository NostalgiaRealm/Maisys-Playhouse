
/* ==== __break @ 0047ac34 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac34-0047ac34
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


