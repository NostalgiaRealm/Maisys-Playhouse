
/* ==== __break @ 00451ed4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ed4-00451ed4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


