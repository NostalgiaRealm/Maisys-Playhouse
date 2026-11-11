
/* ==== __break @ 0047d49b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047d49b-0047d49b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


