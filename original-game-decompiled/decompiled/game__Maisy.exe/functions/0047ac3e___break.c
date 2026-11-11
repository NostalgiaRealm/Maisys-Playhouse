
/* ==== __break @ 0047ac3e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac3e-0047ac3e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


