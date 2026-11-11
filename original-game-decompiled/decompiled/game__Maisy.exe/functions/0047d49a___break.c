
/* ==== __break @ 0047d49a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047d49a-0047d49a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


