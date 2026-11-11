
/* ==== __break @ 140223ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223ba-140223ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


