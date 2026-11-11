
/* ==== __break @ 00451ddb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ddb-00451ddb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


