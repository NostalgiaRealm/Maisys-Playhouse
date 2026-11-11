
/* ==== __break @ 0047aa0a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047aa0a-0047aa0a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


