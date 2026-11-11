
/* ==== __break @ 0046972b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046972b-0046972b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


