
/* ==== __break @ 0046d06e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046d06e-0046d06e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


