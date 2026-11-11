
/* ==== __break @ 0047aa0b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047aa0b-0047aa0b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


