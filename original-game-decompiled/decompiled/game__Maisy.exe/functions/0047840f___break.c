
/* ==== __break @ 0047840f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047840f-0047840f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


