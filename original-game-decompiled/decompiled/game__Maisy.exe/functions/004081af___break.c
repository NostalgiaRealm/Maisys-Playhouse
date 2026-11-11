
/* ==== __break @ 004081af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004081af-004081af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


