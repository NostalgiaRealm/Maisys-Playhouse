
/* ==== __break @ 0040850f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040850f-0040850f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


