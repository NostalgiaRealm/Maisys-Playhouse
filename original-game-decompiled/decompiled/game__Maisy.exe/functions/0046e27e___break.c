
/* ==== __break @ 0046e27e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e27e-0046e27e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


