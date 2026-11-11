
/* ==== __break @ 0046ad3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ad3f-0046ad3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


