
/* ==== __break @ 0046e27f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e27f-0046e27f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


