
/* ==== __break @ 1400d517 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d517-1400d517
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


