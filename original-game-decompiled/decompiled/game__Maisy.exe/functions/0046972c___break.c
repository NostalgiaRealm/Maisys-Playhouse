
/* ==== __break @ 0046972c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046972c-0046972c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


