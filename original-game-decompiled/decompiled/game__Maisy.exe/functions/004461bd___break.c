
/* ==== __break @ 004461bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004461bd-004461bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


