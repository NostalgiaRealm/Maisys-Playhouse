
/* ==== __break @ 0046961d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046961d-0046961d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


