
/* ==== __break @ 0046d0ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046d0ce-0046d0ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


