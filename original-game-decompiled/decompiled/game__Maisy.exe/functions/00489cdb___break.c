
/* ==== __break @ 00489cdb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489cdb-00489cdb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


