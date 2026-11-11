
/* ==== __break @ 1401ec5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec5c-1401ec5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


