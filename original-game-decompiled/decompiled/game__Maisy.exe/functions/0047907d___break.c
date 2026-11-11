
/* ==== __break @ 0047907d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047907d-0047907d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


