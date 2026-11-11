
/* ==== __break @ 0046e9bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e9bc-0046e9bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


