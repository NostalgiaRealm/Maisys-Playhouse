
/* ==== __break @ 0046961a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046961a-0046961a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


