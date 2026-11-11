
/* ==== __break @ 004178ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178ba-004178ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


