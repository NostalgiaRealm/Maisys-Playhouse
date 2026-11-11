
/* ==== __break @ 00451eda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451eda-00451eda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


