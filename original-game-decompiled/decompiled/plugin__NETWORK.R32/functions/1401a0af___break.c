
/* ==== __break @ 1401a0af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0af-1401a0af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


