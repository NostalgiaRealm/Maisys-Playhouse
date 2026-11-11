
/* ==== __break @ 0047907a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047907a-0047907a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


