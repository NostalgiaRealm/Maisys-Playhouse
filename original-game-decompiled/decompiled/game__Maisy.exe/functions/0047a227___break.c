
/* ==== __break @ 0047a227 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a227-0047a227
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


