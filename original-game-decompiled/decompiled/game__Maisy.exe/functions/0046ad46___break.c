
/* ==== __break @ 0046ad46 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046ad46-0046ad46
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


