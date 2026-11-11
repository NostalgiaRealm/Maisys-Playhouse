
/* ==== __break @ 0047bd2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bd2f-0047bd2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


