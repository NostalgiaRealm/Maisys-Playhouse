
/* ==== __break @ 1401a4cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4cc-1401a4cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


