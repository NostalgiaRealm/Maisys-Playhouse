
/* ==== __break @ 0041010e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041010e-0041010e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


