
/* ==== __break @ 004696bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004696bc-004696bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


