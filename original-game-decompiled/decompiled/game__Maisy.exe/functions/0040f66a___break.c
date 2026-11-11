
/* ==== __break @ 0040f66a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f66a-0040f66a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


