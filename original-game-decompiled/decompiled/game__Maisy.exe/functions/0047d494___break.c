
/* ==== __break @ 0047d494 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047d494-0047d494
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


