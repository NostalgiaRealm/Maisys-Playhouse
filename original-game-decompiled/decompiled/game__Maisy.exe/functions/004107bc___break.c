
/* ==== __break @ 004107bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107bc-004107bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


