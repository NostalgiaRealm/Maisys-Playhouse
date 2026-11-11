
/* ==== __break @ 0044ce6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce6e-0044ce6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


