
/* ==== __break @ 0043661a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043661a-0043661a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


