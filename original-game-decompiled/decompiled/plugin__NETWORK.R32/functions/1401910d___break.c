
/* ==== __break @ 1401910d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910d-1401910d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


