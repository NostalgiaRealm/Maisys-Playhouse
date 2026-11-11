
/* ==== __break @ 0047a22f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a22f-0047a22f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


