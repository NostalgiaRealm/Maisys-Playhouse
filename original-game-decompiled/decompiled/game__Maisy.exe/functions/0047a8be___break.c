
/* ==== __break @ 0047a8be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a8be-0047a8be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


