
/* ==== __break @ 00441683 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441683-00441683
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


