
/* ==== __break @ 00441f71 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441f71-00441f71
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


