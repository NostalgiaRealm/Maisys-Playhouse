
/* ==== __break @ 0047a223 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a223-0047a223
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


