
/* ==== __break @ 00451ede ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ede-00451ede
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


