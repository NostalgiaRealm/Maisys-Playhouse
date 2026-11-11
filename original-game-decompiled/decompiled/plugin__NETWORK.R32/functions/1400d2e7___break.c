
/* ==== __break @ 1400d2e7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2e7-1400d2e7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


