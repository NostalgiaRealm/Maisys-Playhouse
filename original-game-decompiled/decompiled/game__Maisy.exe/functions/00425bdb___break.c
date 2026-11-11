
/* ==== __break @ 00425bdb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00425bdb-00425bdb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


