
/* ==== __break @ 0046e98a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e98a-0046e98a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


