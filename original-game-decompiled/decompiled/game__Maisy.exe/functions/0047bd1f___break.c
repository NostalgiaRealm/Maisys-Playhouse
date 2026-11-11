
/* ==== __break @ 0047bd1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bd1f-0047bd1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


