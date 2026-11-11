
/* ==== __break @ 0040850e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040850e-0040850e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


