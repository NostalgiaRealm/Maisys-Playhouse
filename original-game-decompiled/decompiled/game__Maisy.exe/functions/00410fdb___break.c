
/* ==== __break @ 00410fdb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410fdb-00410fdb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


