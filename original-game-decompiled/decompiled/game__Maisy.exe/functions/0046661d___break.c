
/* ==== __break @ 0046661d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046661d-0046661d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


