
/* ==== __break @ 004375af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004375af-004375af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


