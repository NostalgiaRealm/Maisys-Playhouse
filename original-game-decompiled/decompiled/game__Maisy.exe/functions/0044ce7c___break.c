
/* ==== __break @ 0044ce7c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce7c-0044ce7c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


