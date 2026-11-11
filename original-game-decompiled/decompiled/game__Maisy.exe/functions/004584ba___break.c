
/* ==== __break @ 004584ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584ba-004584ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


