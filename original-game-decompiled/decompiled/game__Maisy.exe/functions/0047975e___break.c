
/* ==== __break @ 0047975e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047975e-0047975e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


