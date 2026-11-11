
/* ==== __break @ 004178bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178bc-004178bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


