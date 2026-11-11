
/* ==== __break @ 0047a228 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a228-0047a228
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


