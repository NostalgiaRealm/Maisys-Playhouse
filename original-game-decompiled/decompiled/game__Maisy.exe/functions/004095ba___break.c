
/* ==== __break @ 004095ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004095ba-004095ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


