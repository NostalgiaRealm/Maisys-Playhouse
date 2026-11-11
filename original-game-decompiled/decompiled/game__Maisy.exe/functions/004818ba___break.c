
/* ==== __break @ 004818ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004818ba-004818ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


