
/* ==== __break @ 0047715d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047715d-0047715d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


