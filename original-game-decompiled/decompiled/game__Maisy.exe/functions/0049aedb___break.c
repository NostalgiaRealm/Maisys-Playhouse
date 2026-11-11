
/* ==== __break @ 0049aedb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049aedb-0049aedb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


