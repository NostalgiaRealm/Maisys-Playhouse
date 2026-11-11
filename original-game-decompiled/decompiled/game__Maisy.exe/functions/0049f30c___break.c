
/* ==== __break @ 0049f30c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f30c-0049f30c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


