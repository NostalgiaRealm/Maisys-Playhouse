
/* ==== __break @ 0047dc05 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dc05-0047dc05
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


