
/* ==== __break @ 0047a22e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a22e-0047a22e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


