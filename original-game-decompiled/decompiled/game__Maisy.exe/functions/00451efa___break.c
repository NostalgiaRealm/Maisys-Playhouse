
/* ==== __break @ 00451efa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451efa-00451efa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


