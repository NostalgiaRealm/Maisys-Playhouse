
/* ==== __break @ 00451f7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f7d-00451f7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


