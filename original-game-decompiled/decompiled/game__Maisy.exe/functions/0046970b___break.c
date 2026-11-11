
/* ==== __break @ 0046970b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046970b-0046970b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


