
/* ==== __break @ 0047a053 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a053-0047a053
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


