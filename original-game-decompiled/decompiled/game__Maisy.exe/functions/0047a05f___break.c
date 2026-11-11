
/* ==== __break @ 0047a05f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a05f-0047a05f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


