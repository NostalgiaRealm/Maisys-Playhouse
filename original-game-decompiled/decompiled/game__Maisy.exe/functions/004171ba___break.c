
/* ==== __break @ 004171ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004171ba-004171ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


