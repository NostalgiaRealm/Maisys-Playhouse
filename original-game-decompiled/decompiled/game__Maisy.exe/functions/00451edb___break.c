
/* ==== __break @ 00451edb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451edb-00451edb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


