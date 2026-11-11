
/* ==== __break @ 0042971d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042971d-0042971d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


