
/* ==== __break @ 004095bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004095bc-004095bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


