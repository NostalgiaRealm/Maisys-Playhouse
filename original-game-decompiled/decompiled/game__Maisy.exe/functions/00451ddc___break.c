
/* ==== __break @ 00451ddc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ddc-00451ddc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


