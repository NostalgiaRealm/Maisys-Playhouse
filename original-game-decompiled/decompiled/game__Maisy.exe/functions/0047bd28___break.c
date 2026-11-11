
/* ==== __break @ 0047bd28 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bd28-0047bd28
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


