
/* ==== __break @ 1401a36a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36a-1401a36a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


