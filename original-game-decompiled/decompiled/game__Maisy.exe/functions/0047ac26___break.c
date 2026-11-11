
/* ==== __break @ 0047ac26 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac26-0047ac26
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


