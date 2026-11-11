
/* ==== __break @ 00451ece ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ece-00451ece
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


