
/* ==== __break @ 0045bedb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bedb-0045bedb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


