
/* ==== __break @ 0046e8cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e8cb-0046e8cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


