
/* ==== __break @ 0046969d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046969d-0046969d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


