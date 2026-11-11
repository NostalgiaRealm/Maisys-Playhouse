
/* ==== __break @ 0046658f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046658f-0046658f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


