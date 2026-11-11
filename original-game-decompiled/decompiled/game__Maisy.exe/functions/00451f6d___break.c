
/* ==== __break @ 00451f6d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f6d-00451f6d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


