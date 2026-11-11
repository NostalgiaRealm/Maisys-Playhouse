
/* ==== __break @ 0047bd2e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bd2e-0047bd2e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


