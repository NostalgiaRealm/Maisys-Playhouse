
/* ==== __break @ 1402064a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064a-1402064a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


