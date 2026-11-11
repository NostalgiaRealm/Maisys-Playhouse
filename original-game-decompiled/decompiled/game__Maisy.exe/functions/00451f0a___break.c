
/* ==== __break @ 00451f0a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f0a-00451f0a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


