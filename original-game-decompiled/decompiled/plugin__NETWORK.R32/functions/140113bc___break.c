
/* ==== __break @ 140113bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113bc-140113bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


