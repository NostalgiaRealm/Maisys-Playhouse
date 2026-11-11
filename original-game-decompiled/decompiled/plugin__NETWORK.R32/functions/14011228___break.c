
/* ==== __break @ 14011228 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011228-14011228
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


