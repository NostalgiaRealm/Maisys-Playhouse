
/* ==== __break @ 0047ac13 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047ac13-0047ac13
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


