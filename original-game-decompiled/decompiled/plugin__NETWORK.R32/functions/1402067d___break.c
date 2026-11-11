
/* ==== __break @ 1402067d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067d-1402067d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


