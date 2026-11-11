
/* ==== __break @ 0048195e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048195e-0048195e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


