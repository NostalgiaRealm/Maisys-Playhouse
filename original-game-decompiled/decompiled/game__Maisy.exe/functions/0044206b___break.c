
/* ==== __break @ 0044206b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044206b-0044206b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


