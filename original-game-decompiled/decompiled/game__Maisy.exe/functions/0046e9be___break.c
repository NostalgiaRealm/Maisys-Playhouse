
/* ==== __break @ 0046e9be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e9be-0046e9be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


