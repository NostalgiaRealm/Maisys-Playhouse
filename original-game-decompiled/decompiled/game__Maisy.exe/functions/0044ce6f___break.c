
/* ==== __break @ 0044ce6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce6f-0044ce6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


