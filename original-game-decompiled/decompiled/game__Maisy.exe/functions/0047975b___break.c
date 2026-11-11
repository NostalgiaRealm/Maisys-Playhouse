
/* ==== __break @ 0047975b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047975b-0047975b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


