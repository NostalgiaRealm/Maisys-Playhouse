
/* ==== __break @ 00437ff2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00437ff2-00437ff2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


