
/* ==== __break @ 14022a59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a59-14022a59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


