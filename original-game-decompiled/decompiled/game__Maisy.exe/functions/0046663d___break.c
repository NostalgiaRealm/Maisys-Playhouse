
/* ==== __break @ 0046663d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046663d-0046663d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


