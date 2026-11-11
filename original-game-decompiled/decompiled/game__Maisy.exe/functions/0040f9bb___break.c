
/* ==== __break @ 0040f9bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f9bb-0040f9bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


