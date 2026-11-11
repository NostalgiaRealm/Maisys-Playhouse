
/* ==== __break @ 0047990f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047990f-0047990f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


