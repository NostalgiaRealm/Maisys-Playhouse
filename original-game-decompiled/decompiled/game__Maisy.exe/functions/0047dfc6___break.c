
/* ==== __break @ 0047dfc6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dfc6-0047dfc6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


