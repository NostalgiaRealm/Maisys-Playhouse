
/* ==== __break @ 0047ddde ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ddde-0047ddde
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


