
/* ==== __break @ 0046ad4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ad4d-0046ad4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


