
/* ==== __break @ 0047a22c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a22c-0047a22c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


