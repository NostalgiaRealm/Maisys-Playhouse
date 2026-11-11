
/* ==== __break @ 004370fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004370fa-004370fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


