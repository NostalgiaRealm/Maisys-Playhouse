
/* ==== __break @ 0046d06d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046d06d-0046d06d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


