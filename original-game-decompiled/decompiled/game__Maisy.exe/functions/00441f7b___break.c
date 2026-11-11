
/* ==== __break @ 00441f7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441f7b-00441f7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


