
/* ==== __break @ 0042e6bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e6bc-0042e6bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


