
/* ==== __break @ 0046ad3a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ad3a-0046ad3a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


