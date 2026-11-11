
/* ==== __break @ 00455edb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00455edb-00455edb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


