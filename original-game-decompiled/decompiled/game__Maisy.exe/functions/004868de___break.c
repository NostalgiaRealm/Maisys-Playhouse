
/* ==== __break @ 004868de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004868de-004868de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


