
/* ==== __break @ 004100af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004100af-004100af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


