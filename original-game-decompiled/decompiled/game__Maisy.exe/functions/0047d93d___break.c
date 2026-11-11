
/* ==== __break @ 0047d93d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047d93d-0047d93d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


