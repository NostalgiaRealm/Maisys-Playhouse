
/* ==== __break @ 0047aa04 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047aa04-0047aa04
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


