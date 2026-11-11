
/* ==== __break @ 0049959d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049959d-0049959d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


