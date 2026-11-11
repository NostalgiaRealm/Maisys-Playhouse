
/* ==== __break @ 0047ac4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac4c-0047ac4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


