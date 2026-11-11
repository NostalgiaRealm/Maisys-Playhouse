
/* ==== __break @ 1401a0ab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0ab-1401a0ab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


