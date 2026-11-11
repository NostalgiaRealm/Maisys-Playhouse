
/* ==== __break @ 0047727d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047727d-0047727d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


