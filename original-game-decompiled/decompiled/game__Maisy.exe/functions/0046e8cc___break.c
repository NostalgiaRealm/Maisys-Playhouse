
/* ==== __break @ 0046e8cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e8cc-0046e8cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


