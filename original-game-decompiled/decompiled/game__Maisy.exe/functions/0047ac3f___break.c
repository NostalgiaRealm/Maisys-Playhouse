
/* ==== __break @ 0047ac3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac3f-0047ac3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


