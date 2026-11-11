
/* ==== __break @ 00451edd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451edd-00451edd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


