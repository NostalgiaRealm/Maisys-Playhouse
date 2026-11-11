
/* ==== __break @ 0046e98b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e98b-0046e98b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


