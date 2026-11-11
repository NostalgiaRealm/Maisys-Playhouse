
/* ==== __break @ 00498634 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498634-00498634
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


