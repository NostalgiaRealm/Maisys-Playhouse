
/* ==== __break @ 0046e9b6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e9b6-0046e9b6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


