
/* ==== __break @ 00481ebb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481ebb-00481ebb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


