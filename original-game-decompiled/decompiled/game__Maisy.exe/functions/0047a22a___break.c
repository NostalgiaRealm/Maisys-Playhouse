
/* ==== __break @ 0047a22a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a22a-0047a22a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


