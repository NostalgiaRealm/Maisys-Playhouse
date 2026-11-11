
/* ==== __break @ 0047aa01 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047aa01-0047aa01
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


