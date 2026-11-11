
/* ==== __break @ 0046cf49 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046cf49-0046cf49
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


