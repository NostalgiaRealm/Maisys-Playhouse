
/* ==== __break @ 0047376e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047376e-0047376e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


