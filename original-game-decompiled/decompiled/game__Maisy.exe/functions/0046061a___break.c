
/* ==== __break @ 0046061a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046061a-0046061a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


