
/* ==== __break @ 0046d06f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046d06f-0046d06f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


