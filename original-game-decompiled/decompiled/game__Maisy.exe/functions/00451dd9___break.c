
/* ==== __break @ 00451dd9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451dd9-00451dd9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


