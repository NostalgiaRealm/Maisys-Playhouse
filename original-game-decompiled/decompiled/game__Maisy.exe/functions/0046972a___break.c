
/* ==== __break @ 0046972a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046972a-0046972a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


