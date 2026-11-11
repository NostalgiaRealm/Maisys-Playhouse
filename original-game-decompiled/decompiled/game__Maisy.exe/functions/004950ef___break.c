
/* ==== __break @ 004950ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004950ef-004950ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


