
/* ==== __break @ 0046970c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046970c-0046970c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


