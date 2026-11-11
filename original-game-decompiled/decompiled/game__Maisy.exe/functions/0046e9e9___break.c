
/* ==== __break @ 0046e9e9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e9e9-0046e9e9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


