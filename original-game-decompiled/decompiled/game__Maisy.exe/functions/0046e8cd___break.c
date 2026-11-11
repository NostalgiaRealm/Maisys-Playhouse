
/* ==== __break @ 0046e8cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e8cd-0046e8cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


