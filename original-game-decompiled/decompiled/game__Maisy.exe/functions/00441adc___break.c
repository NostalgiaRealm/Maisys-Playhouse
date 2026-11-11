
/* ==== __break @ 00441adc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441adc-00441adc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


