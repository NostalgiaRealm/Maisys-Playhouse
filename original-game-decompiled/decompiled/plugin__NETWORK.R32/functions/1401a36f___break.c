
/* ==== __break @ 1401a36f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36f-1401a36f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


