
/* ==== __break @ 004818bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004818bc-004818bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


