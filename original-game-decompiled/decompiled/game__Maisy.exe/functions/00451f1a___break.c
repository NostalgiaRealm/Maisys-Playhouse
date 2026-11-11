
/* ==== __break @ 00451f1a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f1a-00451f1a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


