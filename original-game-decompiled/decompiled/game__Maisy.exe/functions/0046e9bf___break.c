
/* ==== __break @ 0046e9bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e9bf-0046e9bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


