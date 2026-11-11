
/* ==== __break @ 00441f7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441f7e-00441f7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


