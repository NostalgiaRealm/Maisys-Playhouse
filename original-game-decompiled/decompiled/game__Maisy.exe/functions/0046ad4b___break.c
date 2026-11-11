
/* ==== __break @ 0046ad4b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ad4b-0046ad4b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


