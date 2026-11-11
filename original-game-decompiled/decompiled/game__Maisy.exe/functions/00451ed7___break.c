
/* ==== __break @ 00451ed7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ed7-00451ed7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


