
/* ==== __break @ 0047dfcc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dfcc-0047dfcc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


