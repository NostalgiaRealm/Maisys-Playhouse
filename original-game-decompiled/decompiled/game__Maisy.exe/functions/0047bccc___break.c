
/* ==== __break @ 0047bccc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bccc-0047bccc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


