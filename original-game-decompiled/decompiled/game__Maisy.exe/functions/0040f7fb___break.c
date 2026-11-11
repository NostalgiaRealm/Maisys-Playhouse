
/* ==== __break @ 0040f7fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f7fb-0040f7fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


