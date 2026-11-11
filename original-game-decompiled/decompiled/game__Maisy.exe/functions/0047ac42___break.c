
/* ==== __break @ 0047ac42 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac42-0047ac42
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


