
/* ==== __break @ 0049addb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049addb-0049addb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


