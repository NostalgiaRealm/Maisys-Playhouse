
/* ==== __break @ 0046658e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046658e-0046658e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


