
/* ==== __break @ 1401a36c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36c-1401a36c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


