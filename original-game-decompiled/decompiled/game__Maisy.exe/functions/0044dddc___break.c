
/* ==== __break @ 0044dddc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dddc-0044dddc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


