
/* ==== __break @ 0047da8a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047da8a-0047da8a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


