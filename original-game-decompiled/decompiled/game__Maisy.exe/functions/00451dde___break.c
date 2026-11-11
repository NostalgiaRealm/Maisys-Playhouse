
/* ==== __break @ 00451dde ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451dde-00451dde
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


