
/* ==== __break @ 0046658b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046658b-0046658b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


