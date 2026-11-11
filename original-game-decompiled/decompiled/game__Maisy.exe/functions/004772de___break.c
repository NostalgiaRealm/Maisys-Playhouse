
/* ==== __break @ 004772de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004772de-004772de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


