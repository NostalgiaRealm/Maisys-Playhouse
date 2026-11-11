
/* ==== __break @ 0047dddb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dddb-0047dddb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


