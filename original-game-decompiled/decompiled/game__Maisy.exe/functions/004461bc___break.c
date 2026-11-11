
/* ==== __break @ 004461bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004461bc-004461bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


