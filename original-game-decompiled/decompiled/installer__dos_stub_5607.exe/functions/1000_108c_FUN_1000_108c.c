
/* ==== FUN_1000_108c @ 1000:108c ==== 
 * signature: undefined FUN_1000_108c(void)
 * body: 1000:108c-1000:1098
 */

void FUN_1000_108c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_062a();
  return;
}


