
/* ==== __break @ 0041f4bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041f4bc-0041f4bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


