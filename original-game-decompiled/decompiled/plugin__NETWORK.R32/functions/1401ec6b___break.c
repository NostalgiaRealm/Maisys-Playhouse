
/* ==== __break @ 1401ec6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6b-1401ec6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


