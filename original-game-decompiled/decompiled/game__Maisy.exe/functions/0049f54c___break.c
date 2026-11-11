
/* ==== __break @ 0049f54c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f54c-0049f54c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


