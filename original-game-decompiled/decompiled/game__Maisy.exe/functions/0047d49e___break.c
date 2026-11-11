
/* ==== __break @ 0047d49e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047d49e-0047d49e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


