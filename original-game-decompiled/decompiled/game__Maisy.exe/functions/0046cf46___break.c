
/* ==== __break @ 0046cf46 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046cf46-0046cf46
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


