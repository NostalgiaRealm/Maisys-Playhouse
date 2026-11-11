
/* ==== __break @ 140223bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223bc-140223bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


