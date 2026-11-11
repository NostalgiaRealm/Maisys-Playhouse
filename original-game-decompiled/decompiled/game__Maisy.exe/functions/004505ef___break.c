
/* ==== __break @ 004505ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004505ef-004505ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


