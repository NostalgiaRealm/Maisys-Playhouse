
/* ==== __break @ 0047a22b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a22b-0047a22b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


