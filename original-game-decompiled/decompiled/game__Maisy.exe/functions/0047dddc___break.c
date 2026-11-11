
/* ==== __break @ 0047dddc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dddc-0047dddc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


