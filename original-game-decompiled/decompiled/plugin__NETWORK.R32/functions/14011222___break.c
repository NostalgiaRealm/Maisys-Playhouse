
/* ==== __break @ 14011222 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011222-14011222
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


