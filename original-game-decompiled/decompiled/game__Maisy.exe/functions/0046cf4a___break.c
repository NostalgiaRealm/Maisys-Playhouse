
/* ==== __break @ 0046cf4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046cf4a-0046cf4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


