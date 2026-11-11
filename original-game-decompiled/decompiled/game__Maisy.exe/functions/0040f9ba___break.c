
/* ==== __break @ 0040f9ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f9ba-0040f9ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


