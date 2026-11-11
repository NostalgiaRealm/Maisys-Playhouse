
/* ==== __break @ 0047d1fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047d1fb-0047d1fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


