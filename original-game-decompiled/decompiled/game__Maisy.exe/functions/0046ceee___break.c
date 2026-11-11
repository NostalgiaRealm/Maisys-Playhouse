
/* ==== __break @ 0046ceee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ceee-0046ceee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


