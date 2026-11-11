
/* ==== __break @ 0041390d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041390d-0041390d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


