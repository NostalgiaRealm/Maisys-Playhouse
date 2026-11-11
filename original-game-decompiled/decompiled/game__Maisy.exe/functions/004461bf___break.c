
/* ==== __break @ 004461bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004461bf-004461bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


