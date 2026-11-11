
/* ==== __break @ 0047725e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047725e-0047725e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


