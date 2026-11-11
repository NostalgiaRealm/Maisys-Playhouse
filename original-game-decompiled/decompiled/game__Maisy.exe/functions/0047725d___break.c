
/* ==== __break @ 0047725d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047725d-0047725d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


