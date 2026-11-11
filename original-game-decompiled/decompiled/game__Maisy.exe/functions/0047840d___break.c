
/* ==== __break @ 0047840d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047840d-0047840d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


