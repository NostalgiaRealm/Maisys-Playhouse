
/* ==== __break @ 14022a5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a5a-14022a5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


