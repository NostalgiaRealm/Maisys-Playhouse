
/* ==== __break @ 0047dfcb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dfcb-0047dfcb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


