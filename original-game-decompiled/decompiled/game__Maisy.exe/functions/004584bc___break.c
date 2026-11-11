
/* ==== __break @ 004584bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584bc-004584bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


