
/* ==== __break @ 0044da59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044da59-0044da59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


