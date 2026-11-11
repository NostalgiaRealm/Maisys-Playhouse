
/* ==== __break @ 0046967f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046967f-0046967f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


