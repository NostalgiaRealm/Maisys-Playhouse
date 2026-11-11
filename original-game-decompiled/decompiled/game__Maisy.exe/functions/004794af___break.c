
/* ==== __break @ 004794af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794af-004794af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


