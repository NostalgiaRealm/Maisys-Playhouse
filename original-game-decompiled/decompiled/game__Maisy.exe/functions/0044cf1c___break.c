
/* ==== __break @ 0044cf1c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044cf1c-0044cf1c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


