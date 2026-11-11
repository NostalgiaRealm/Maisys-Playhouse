
/* ==== __break @ 0047bd23 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bd23-0047bd23
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


