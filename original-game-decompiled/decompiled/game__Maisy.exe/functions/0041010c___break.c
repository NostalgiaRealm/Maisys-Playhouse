
/* ==== __break @ 0041010c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041010c-0041010c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


