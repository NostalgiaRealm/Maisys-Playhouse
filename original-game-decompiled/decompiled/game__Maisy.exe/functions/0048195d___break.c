
/* ==== __break @ 0048195d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048195d-0048195d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


