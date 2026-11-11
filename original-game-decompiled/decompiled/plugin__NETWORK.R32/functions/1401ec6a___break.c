
/* ==== __break @ 1401ec6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6a-1401ec6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


