
/* ==== __break @ 0048882c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048882c-0048882c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


