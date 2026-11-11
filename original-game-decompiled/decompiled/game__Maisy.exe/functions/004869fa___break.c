
/* ==== __break @ 004869fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004869fa-004869fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


