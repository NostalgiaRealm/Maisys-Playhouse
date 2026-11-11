
/* ==== __break @ 0046ad45 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ad45-0046ad45
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


