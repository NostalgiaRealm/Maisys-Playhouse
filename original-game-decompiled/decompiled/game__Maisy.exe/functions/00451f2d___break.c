
/* ==== __break @ 00451f2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f2d-00451f2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


