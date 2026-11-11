
/* ==== __break @ 00489cdf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489cdf-00489cdf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


