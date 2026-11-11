
/* ==== __break @ 0047a054 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a054-0047a054
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


