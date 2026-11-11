
/* ==== __break @ 00451f3a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f3a-00451f3a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


