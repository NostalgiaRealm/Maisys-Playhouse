
/* ==== __break @ 004869fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004869fb-004869fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


