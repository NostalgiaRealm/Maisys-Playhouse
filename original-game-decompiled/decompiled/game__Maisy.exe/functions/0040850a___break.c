
/* ==== __break @ 0040850a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040850a-0040850a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


