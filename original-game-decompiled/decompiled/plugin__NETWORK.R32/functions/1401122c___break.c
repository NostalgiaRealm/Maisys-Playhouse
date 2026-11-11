
/* ==== __break @ 1401122c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122c-1401122c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


