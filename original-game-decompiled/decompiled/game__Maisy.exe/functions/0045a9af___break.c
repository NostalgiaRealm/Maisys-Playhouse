
/* ==== __break @ 0045a9af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a9af-0045a9af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


