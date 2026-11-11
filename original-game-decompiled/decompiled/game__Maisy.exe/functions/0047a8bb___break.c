
/* ==== __break @ 0047a8bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a8bb-0047a8bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


