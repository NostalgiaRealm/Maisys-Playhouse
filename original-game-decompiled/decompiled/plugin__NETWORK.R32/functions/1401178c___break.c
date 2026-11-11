
/* ==== __break @ 1401178c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401178c-1401178c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


