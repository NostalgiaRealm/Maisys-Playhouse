
/* ==== __break @ 0044145c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044145c-0044145c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


