
/* ==== __break @ 0046e27b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e27b-0046e27b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


