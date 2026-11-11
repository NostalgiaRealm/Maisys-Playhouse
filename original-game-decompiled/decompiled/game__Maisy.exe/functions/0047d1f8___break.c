
/* ==== __break @ 0047d1f8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047d1f8-0047d1f8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


