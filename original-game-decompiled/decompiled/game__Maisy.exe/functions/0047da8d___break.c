
/* ==== __break @ 0047da8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047da8d-0047da8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


