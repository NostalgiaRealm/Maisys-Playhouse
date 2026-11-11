
/* ==== __break @ 0043661d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043661d-0043661d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


