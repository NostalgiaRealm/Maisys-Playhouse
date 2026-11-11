
/* ==== __break @ 004787af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004787af-004787af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


