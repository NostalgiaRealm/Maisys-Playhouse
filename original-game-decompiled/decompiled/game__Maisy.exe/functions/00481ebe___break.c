
/* ==== __break @ 00481ebe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481ebe-00481ebe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


