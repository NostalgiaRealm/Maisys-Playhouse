
/* ==== __break @ 1401a4cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4cb-1401a4cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


