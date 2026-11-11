
/* ==== __break @ 0046970a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046970a-0046970a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


