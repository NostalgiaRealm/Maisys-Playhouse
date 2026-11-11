
/* ==== __break @ 0044206d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044206d-0044206d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


