
/* ==== __break @ 00436edb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436edb-00436edb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


