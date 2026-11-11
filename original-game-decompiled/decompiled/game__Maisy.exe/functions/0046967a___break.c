
/* ==== __break @ 0046967a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046967a-0046967a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


