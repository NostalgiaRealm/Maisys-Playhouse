
/* ==== __break @ 1402070d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402070d-1402070d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


