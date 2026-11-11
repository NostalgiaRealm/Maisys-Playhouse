
/* ==== __break @ 0046967b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046967b-0046967b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


