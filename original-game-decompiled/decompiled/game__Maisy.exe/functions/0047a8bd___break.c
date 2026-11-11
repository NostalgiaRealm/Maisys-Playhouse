
/* ==== __break @ 0047a8bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a8bd-0047a8bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


