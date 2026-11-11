
/* ==== __break @ 004298fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004298fa-004298fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


