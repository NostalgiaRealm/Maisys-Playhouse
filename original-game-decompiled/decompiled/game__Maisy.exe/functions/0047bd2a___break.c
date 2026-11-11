
/* ==== __break @ 0047bd2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bd2a-0047bd2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


