
/* ==== __break @ 0044206c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044206c-0044206c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


