
/* ==== __break @ 0046972d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046972d-0046972d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


