
/* ==== __break @ 00451eca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451eca-00451eca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


