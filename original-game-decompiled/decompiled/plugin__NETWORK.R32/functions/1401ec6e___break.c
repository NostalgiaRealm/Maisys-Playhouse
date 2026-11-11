
/* ==== __break @ 1401ec6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6e-1401ec6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


