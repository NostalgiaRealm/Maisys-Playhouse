
/* ==== __break @ 0046d06b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046d06b-0046d06b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


