
/* ==== __break @ 0047bd13 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bd13-0047bd13
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


