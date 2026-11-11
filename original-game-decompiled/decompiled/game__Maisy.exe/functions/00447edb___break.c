
/* ==== __break @ 00447edb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447edb-00447edb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


