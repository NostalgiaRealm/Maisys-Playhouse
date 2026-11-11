
/* ==== __break @ 0044896a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044896a-0044896a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


