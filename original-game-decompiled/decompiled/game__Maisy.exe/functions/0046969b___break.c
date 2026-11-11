
/* ==== __break @ 0046969b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046969b-0046969b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


