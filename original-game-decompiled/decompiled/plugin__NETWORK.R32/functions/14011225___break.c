
/* ==== __break @ 14011225 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011225-14011225
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


