
/* ==== __break @ 140113ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113ba-140113ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


