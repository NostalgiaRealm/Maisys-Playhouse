
/* ==== __break @ 00451f5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451f5b-00451f5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


