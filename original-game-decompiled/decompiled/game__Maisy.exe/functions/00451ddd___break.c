
/* ==== __break @ 00451ddd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ddd-00451ddd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


