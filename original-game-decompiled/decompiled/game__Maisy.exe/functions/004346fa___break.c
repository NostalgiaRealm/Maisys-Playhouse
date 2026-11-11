
/* ==== __break @ 004346fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004346fa-004346fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


