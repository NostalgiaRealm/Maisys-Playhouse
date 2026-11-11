
/* ==== __break @ 004695af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695af-004695af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


