
/* ==== __break @ 0046ad3b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ad3b-0046ad3b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


