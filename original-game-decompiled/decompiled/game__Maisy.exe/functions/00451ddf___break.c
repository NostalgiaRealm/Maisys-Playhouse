
/* ==== __break @ 00451ddf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ddf-00451ddf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


