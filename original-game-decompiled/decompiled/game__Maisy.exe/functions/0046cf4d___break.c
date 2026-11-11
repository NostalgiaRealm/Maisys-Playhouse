
/* ==== __break @ 0046cf4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046cf4d-0046cf4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


