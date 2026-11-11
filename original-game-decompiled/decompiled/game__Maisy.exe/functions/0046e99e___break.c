
/* ==== __break @ 0046e99e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e99e-0046e99e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


