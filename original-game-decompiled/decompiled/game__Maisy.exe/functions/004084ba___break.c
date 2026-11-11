
/* ==== __break @ 004084ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004084ba-004084ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


