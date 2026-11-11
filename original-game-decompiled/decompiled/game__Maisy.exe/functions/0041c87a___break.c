
/* ==== __break @ 0041c87a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041c87a-0041c87a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


