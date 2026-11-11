
/* ==== __break @ 0049482d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049482d-0049482d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


