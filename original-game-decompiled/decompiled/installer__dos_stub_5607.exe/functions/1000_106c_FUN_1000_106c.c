
/* ==== FUN_1000_106c @ 1000:106c ==== 
 * signature: undefined FUN_1000_106c(void)
 * body: 1000:106c-1000:108a
 */

void FUN_1000_106c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_062a();
  return;
}


