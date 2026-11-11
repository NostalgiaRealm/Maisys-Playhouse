
/* ==== __break @ 0045f259 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f259-0045f259
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


