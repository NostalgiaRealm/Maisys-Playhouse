
/* ==== FUN_12031adc @ 12031adc ==== 
 * signature: undefined FUN_12031adc(void)
 * body: 12031adc-12031adc
 */

void FUN_12031adc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


