
/* ==== __break @ 004084bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004084bc-004084bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


