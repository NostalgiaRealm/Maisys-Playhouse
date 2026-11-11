
/* ==== __break @ 0046d0cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046d0cc-0046d0cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


