
/* ==== __break @ 140183ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183ba-140183ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


