
/* ==== __break @ 0047725f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047725f-0047725f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


