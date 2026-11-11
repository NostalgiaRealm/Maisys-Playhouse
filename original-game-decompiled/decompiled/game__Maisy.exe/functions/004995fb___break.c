
/* ==== __break @ 004995fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004995fb-004995fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


