
/* ==== __break @ 0047975a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047975a-0047975a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


