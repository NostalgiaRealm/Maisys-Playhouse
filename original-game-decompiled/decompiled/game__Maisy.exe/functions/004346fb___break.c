
/* ==== __break @ 004346fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004346fb-004346fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


