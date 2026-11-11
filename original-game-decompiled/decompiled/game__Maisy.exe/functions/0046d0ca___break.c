
/* ==== __break @ 0046d0ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046d0ca-0046d0ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


